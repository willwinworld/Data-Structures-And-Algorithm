#include <iostream>
using namespace std;


/*
��̬��Ա�����;�̬��Ա����
��̬��Ա����˵��ǰ�����static�ؼ��ֵĳ�Ա 
*/
class CRectangle{
	private:
		int w, h;
		static int nTotalArea; // ��̬��Ա����
		static int nTotalNumber;
	public:
		CRectangle(int w_, int h_);
		~CRectangle();
		static void PrintTotal(); // ��̬��Ա���� 
};


/*��ͨ��Ա����ÿ�������и��Ե�һ�ݣ�����̬��Ա����һ����һ�ݣ�
Ϊ���ж�����sizeof�����������㾲̬��Ա����*/
class CMyclass{
	int n;
	static int s;
};
//�� sizeof(CMyclass)����4

/*��ͨ��Ա�����������������ĳ�����󣬶���̬��Ա
������������������ĳ��������˾�̬��Ա����Ҫͨ��
������ܷ���*/


/*
��η��ʾ�̬��Ա
����::��Ա��
CRectangle::PrintTotal();

����������Ա��
CRectangle r; r.PrintTotal();

ָ��->��Ա��
CRectangle *p = &r; p->PrintTotal();

����.��Ա��
CRectangle & ref = r; int n = ref.nTotalNumber; 
*/ 


/*��̬��Ա������������ȫ�ֱ���������һ�����󶼲����ڣ�
��ľ�̬��Ա����Ҳ���� 
*/
 
 
