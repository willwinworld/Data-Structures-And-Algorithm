#include <iostream>
using namespace std;
/*
������Ա���������س�Ա����
�������������뵽���õĵط����Ͳ����������ĵ��ÿ�����
������Ա������1.inline + ��Ա����
			  2.����������������ඨ���ڲ�
class B{
	inline void func1();  // �����������巽ʽһ 
	void func2(){  // �����������巽ʽ�� 
	
	};
};
void B::func1(){}

��Ա���������ؼ�����ȱʡ
���س�Ա����
��Ա���� -- ��ȱʡ����
class Location {
	private:
		int x, y;
	public: 
		void init(int x=0, int y=0);
		void valueX(int val){x = val;}
		int valueX(){return x;} 
};
*/
class Location {
	private:
		int x, y;
	public: 
		void init(int x=0, int y=0);
		void valueX(int val){x = val;} // ����1
		int valueX(){return x;}  // ����2 
};
void Location::init(int X, int Y){
	x = X;
	y = Y;
}
int main(){
	Location A;
	A.init(5);
	A.valueX(5);  // ���ú���1 
	cout << A.valueX(); // ���ú���2 
	return 0;
}

/*
ʹ��ȱʡ����Ҫע������к�������ʱ�Ķ�����
class Location{
	private:
	    int x, y;
	public:
		void init(int x = 0, int y = 0);
		void valueX(int val = 0 ){x = val;}  // ����1 
		int valueX(){return x;}  // ����2 
};

Location A;
A.valueX();  // ���󣬱������޷��жϵ����ĸ�valueX
��Ϊ����ǵ��ú���1����ôĬ��val=0
����ǵ��ú���2����ô���޲ε� 
*/ 
