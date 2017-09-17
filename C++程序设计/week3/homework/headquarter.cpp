class Headquarter  
{  
    private:  
        int totalLifeValue;  // 基地的原始生命值 
        bool stopped;  // 是否停止生产士兵 
        int totalWarriorNum;  // 总共的战士总数 
        int color;  // 颜色 
        int curMakingSeqIdx; // 当前武士类型是同类型的第几个 
        int warriorNum[WARRIOR_NUM]; //存放每种武士的数量  
        Warrior * pWarriors[1000];  // 司令部指向战士的指针 
    public:  
        friend class Warrior;  // A(Warrior)是B(Headquarter)的友元类，A的成员函数可以访问B的私有成员 
        static int makingSeq[2][WARRIOR_NUM]; //两个队列,武士的制作顺序序列  
        void Init(int color_, int lv);  // 普通方法, lv是总的生命元
        ~Headquarter ();  // 析构函数  
        int Produce(int nTime);  // 生产士兵方法 
        string GetColor();  // 获得颜色 
  
}; 

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

int Headquarter::makingSeq[2][WARRIOR_NUM] = { { 2,3,4,1,0 },{3,0,1,2,4} }; //两个司令部武士的制作顺序序列  