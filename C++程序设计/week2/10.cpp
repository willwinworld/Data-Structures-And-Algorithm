#include <iostream>
#include <stdio.h> 
using namespace std;
/*
�ṹ��������Ƶ�˼��
�ṹ���������
���ӵĴ�����->���ֽ�/ģ�黯->����������
�Զ����£�����
����=���ݽṹ+�㷨
����=����+����
�������ĳ���=��+��+...+��

�͹�����->��
дһ������������εĿ�͸ߣ����������ܳ�
class CRectangle {
	public int w, h;  // ���� 
	void init(int w_, int h_){
		w = w_; h = h_;
	}	
	int Area(){
		return w*h;
	}
	int Perimeter(){
		return 2*(w+h);
	}
};  //�����зֺ�

int main(){
	int w, h;
	CRectangle r; // r��һ������
	cin >> w >> h;
	r.init(w, h);
	cout << r.Area() << endl << r.Perimeter();
	return 0; 
}

������ڴ����

������ڴ�ռ�
����Ĵ�С=���г�Ա�����Ĵ�С֮��
E.g. CRectangle��Ķ���sizeof(CRectangle) = 8  // ����int�͵Ĵ�С 
ÿ����������Լ��Ĵ洢�ռ�
һ�������ĳ����Ա�������ı䣬����Ӱ�쵽�����Ķ��� 

����������
����֮�������'='���и�ֵ
������'==', '!=', '>', '<', '>=', '<='���бȽ�
������Щ�����������"����"

������ĳ�Ա�����ͳ�Ա����
�÷�1��������.��Ա��
CRectangle r1, r2;
r1.w = 5;
r2.init(3, 4); 

�÷�2:ָ��->��Ա��
CRectangle r1, r2;
CRectangle * p1 = & r1;
CRectangle * p2 = & r2;
p1->w = 5;
p2->init(3,4);  // init������p2ָ��Ķ�����

�÷�3��������.��Ա��
CRectangle r2;
CRectangle & rr = r2;  // rr����r2 

rr.w = 5;
rr.init(3, 4);  // rr��ֵ���ˣ�r2��ֵҲ��

��һ���������ķ�ʽ
void PrintRectangle(CRectangle &r){
	cout << r.Area() << "," << r.Perimeter();
}
CRectangle r3;
r3.init(3, 4);
PrintRectangle(r3);

��ĳ�Ա��������һ��д��
class CRectangle{
	public:
		int w, h;
		int Area();  // ��Ա�������ڴ˴�����
		int Perimeter();
		void Init(int w_, int h_);  
};

int CRectangle::Area(){
	return w*h;
}
int CRectangle::Perimeter(){
	return 2*(w+h);
}
void CRectangle::Init(int w_, int h_){
	w = w_; h = h_;
}
����ͨ��:����/�����ָ��/��������� 
*/
