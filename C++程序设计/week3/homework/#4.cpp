#include <iostream>  
#include <cstdio>  
#include <string>  
using namespace std;  
const int  WARRIOR_NUM = 5;  
/* 
string Warrior::names[WARRIOR_NUM] = { "dragon","ninja","iceman","lion","wolf" }; 
红方司令部按照 iceman、lion、wolf、ninja、dragon 的顺序制造武士。 
蓝方司令部按照 lion、dragon、ninja、iceman、wolf 的顺序制造武士。 
*/  
  
class Headquarter;  
class Warrior  
{  
    private:  
        Headquarter * pHeadquarter; // 不同司令部的指针 
        int kindNo; // 武士的种类编号 0 dragon 1 ninja 2 iceman 3 lion 4 wolf  
        int no;  // 第几个武士 
    public:  
        static string names[WARRIOR_NUM];  // 静态字符数组 
        static int initialLifeValue[WARRIOR_NUM];  // 静态整型数组  
        Warrior( Headquarter * p,int no_,int kindNo_ );  // 构造函数 
        void PrintResult(int nTime);  // 根据时间打印结果 
};  

Warrior::Warrior( Headquarter * p,int no_,int kindNo_ ) {  
    no = no_;  
    kindNo = kindNo_;  
    pHeadquarter = p;  
}  

class Headquarter  
{  
    private:  
        int totalLifeValue;  // 基地的原始生命值 
        bool stopped;  // 是否停止生产士兵 
        int totalWarriorNum;  // 总共的战士总数 
        int color;  // 颜色 
        int curMakingSeqIdx; //当前武士类型是同类型的第几个 
        int warriorNum[WARRIOR_NUM]; //存放每种武士的数量  
        Warrior * pWarriors[1000];  // 指向战士的指针 
    public:  
        friend class Warrior;  // A(Warrior)是B(Headquarter)的友元类，A的成员函数可以访问B的私有成员 
        static int makingSeq[2][WARRIOR_NUM]; //武士的制作顺序序列  
        void Init(int color_, int lv);  // 普通方法  
        ~Headquarter ();  // 析构函数  
        int Produce(int nTime);  // 生产士兵方法 
        string GetColor();  // 获得颜色 
  
}; 

void Warrior::PrintResult(int nTime)  
{  
    string color =  pHeadquarter->GetColor();  // 因为Warrior是Headquarter的友元类，所以Warrior的成员函数PrintResult可以访问
    printf("%03d %s %s %d born with strength %d,%d %s in %s headquarter\n"  ,  
        nTime, color.c_str(), names[kindNo].c_str(), no, initialLifeValue[kindNo],  
        pHeadquarter->warriorNum[kindNo],names[kindNo].c_str(),color.c_str());  
    /*
	时间，颜色，武士名字，所属阵营的武士编号，初始化力量值，
	
	*/
}  
   
void Headquarter::Init(int color_, int lv)  // 初始化阵营的颜色，还有总的生命值 
{  
    color = color_;  // 颜色 
    totalLifeValue = lv;  // 生命元 
    totalWarriorNum = 0;  // 总的战士数量 
    stopped = false;  // 是否停止 
    curMakingSeqIdx = 0;  // 当前制造队列的序列 
    for( int i = 0;i < WARRIOR_NUM;i++ )  
        warriorNum[i] = 0;  
}  
  
Headquarter::~Headquarter () {  // 析构函数 
    for( int i = 0;i < totalWarriorNum;i++ )  
        delete pWarriors[i];  
}  

int Headquarter::Produce(int nTime)  
{  
  
    if( stopped )  
        return 0;  
    int searchingTimes = 0;  
    while( Warrior::initialLifeValue[makingSeq[color][curMakingSeqIdx]] > totalLifeValue
	 && searchingTimes < WARRIOR_NUM ) {
		/**/ 
        curMakingSeqIdx = ( curMakingSeqIdx + 1 ) % WARRIOR_NUM;  
        searchingTimes++;  
    }  
    int kindNo = makingSeq[color][curMakingSeqIdx];  
    if( Warrior::initialLifeValue[kindNo] > totalLifeValue ) {  
        stopped = true;  
        if( color == 0)  
            printf("%03d red headquarter stops making warriors\n",nTime);  
        else  
            printf("%03d blue headquarter stops making warriors\n",nTime);  
        return 0;  
    }  
    //制作士兵：  
    totalLifeValue -= Warrior::initialLifeValue[kindNo];  
    curMakingSeqIdx = ( curMakingSeqIdx + 1 ) % WARRIOR_NUM;  
    pWarriors[totalWarriorNum] = new Warrior( this,totalWarriorNum+1,kindNo);  
    warriorNum[kindNo]++;  
    pWarriors[totalWarriorNum]->PrintResult(nTime);  
    totalWarriorNum++;  
    return 1;  
}  
  
string Headquarter::GetColor()  
{  
    if( color == 0)  
        return "red";  
    else  
        return "blue";  
}  

string Warrior::names[WARRIOR_NUM] = { "dragon","ninja","iceman","lion","wolf" };  
int Warrior::initialLifeValue [WARRIOR_NUM];  
int Headquarter::makingSeq[2][WARRIOR_NUM] = { { 2,3,4,1,0 },{3,0,1,2,4} }; //两个司令部武士的制作顺序序列  

int main()  
{  
    int t;  
    int m;  
    Headquarter RedHead,BlueHead;  
    scanf("%d",&t);  
    int nCaseNo = 1;  
    while ( t-- ) {  
        printf("Case:%d\n",nCaseNo++);  
        scanf("%d",&m);  
        for( int i = 0;i < WARRIOR_NUM;i++ )  
            scanf("%d", & Warrior::initialLifeValue[i]);  
        RedHead.Init(0,m);  
        BlueHead.Init(1,m);  
        int nTime = 0;  
        while(true) {  
            int tmp1 = RedHead.Produce(nTime);  
            int tmp2 = BlueHead.Produce(nTime);  
            if( tmp1 == 0 && tmp2 == 0)  
                break;  
            nTime++;  
        }  
    }  
    return 0;  
}  
