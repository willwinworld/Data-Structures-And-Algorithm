class Warrior  
{  
    private:  
        Headquarter * pHeadquarter; // 战士指向不同司令部的指针 
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

void Warrior::PrintResult(int nTime)  
{  
    string color =  pHeadquarter->GetColor();  // 因为Warrior是Headquarter的友元类，所以Warrior的成员函数PrintResult可以访问
    printf("%03d %s %s %d born with strength %d,%d %s in %s headquarter\n"  ,  
        nTime, color.c_str(), names[kindNo].c_str(), no, initialLifeValue[kindNo],  
        pHeadquarter->warriorNum[kindNo],names[kindNo].c_str(),color.c_str());  
    /*
	时间，颜色，武士名字，所属阵营的武士编号，初始化力量值，
	000                   nTime
   	red                   color.c_str()
	iceman                names[kindNo].c_str()
	1                     no
	born with strength
	5,                    initialLifeValue[kindNo]
	1                     pHeadquarter->warriorNum[kindNo]
	iceman                names[kindNo].c_str()
	in
	red                   color.c_str()
	headquarter
	*/
}  

string Warrior::names[WARRIOR_NUM] = { "dragon","ninja","iceman","lion","wolf" };  
int Warrior::initialLifeValue [WARRIOR_NUM];