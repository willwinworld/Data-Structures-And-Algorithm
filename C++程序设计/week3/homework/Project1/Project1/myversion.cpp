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
class Warrior{
private:
	Headquarter * pHeadquarter;
	int kindNo;
	int no;
public:
	static string names[WARRIOR_NUM];
	static int initialLifeValue[WARRIOR_NUM];
	Warrior(Headquarter * p, int kindNo_, int no_);
	void PrintResult(int nTime);
};

Warrior::Warrior(Headquarter * p, int kindNo_, int no_){  // 这边写错了，没有写::Warrior
	pHeadquarter = p;
	no = no_;
	kindNo = kindNo_;
};

/*
class Remote
{

}
class Tv
{
public:
	friend class Remote; // Remote can access Tv private parts, 遥控器类可以去改变Tv类的状态		
}
*/
class Headquarter {
private:
	int totalLifeValue;
	bool stopped;
	int totalWarriorNum;
	int color;
	int curMakingSeqIdx;
	int warriorNum[WARRIOR_NUM];
	Warrior * pWarriors[1000];
public:
	friend class Warrior;
	static int makingSeq[2][WARRIOR_NUM];
	void Init(int color_, int lv);
	~Headquarter();
	int Produce(int nTime);
	string GetColor();
};

void Warrior::PrintResult(int nTime) {
	string color = pHeadquarter-> GetColor();
	printf("%03d %s %s %d born with strength %d, %d %s in %s headquarter\n",
		   nTime, color.c_str(), names[kindNo].c_str(), no, initialLifeValue[kindNo],
		   pHeadquarter->warriorNum[kindNo], names[kindNo].c_str(), color.c_str());
}

void Headquarter::Init(int color_, int lv) {
	totalLifeValue = lv;
	stopped = false;
	totalWarriorNum = 0;
	color = color_;
	curMakingSeqIdx = 0;
	for (int i = 0; i < WARRIOR_NUM; i++) {
		warriorNum[i] = 0;
	}
}

int Headquarter::Produce(int nTime) {
	if (stopped)
		return 0;
	int searchingTimes = 0;
	while (searchingTimes < WARRIOR_NUM && Warrior::initialLifeValue[makingSeq[color][curMakingSeqIdx]] > totalLifeValue) {
		curMakingSeqIdx = (curMakingSeqIdx + 1) % WARRIOR_NUM;
		searchingTimes++;
	}
	int kindNo = makingSeq[color][curMakingSeqIdx];
	if (Warrior::initialLifeValue[kindNo] > totalLifeValue) {
		stopped = true;
		if (color == 0)
			printf("%03d red headquarter stops making warriors\n", nTime);
		else
			printf("%03d blue headquarter stops making warriors\n", nTime);
		return 0;
	}
	totalLifeValue -= Warrior::initialLifeValue[kindNo];
	curMakingSeqIdx = (curMakingSeqIdx + 1) % WARRIOR_NUM;
	pWarriors[totalWarriorNum] = new Warrior(this, totalWarriorNum + 1, kindNo);
	warriorNum[kindNo]++;
	pWarriors[totalWarriorNum]->PrintResult(nTime);
	totalWarriorNum++;
	return 1;
}

string Headquarter::GetColor() {
	if (color == 0)
		return "red";
	else
		return "blue";
}

string Warrior::names[WARRIOR_NUM] = { "dragon","ninja","iceman","lion","wolf" };
int Warrior::initialLifeValue[WARRIOR_NUM];
int Headquarter::makingSeq[2][WARRIOR_NUM] = { { 2,3,4,1,0 },{ 3,0,1,2,4 } };  // 

int main() {
	int t;  // case数目
	int m;  // 司令部总的生命元
	Headquarter RedHead, BlueHead;
	scanf_s("%d", &t);
	int nCaseNo = 1;
	while (t--) {
		printf("Case:%d\n", nCaseNo++);
		scanf_s("%d", &m);
		for (int i = 0; i < WARRIOR_NUM; i++) {
			scanf_s("%d", &Warrior::initialLifeValue[i]);
		}
		RedHead.Init(0, m);
		BlueHead.Init(1, m);
		int nTime = 0;
		while (true) {
			int tmp1 = RedHead.Produce(nTime);
			int tmp2 = BlueHead.Produce(nTime);
			if (tmp1 == 0 && tmp2 == 0)
				break;
			nTime++;
		}
	}
	return 0;
}