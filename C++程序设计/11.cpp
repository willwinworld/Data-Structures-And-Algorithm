#include <iostream>
#include <stdio.h> 
using namespace std;
/*
���Ա�Ŀɷ��ʷ�Χ
�ؼ���--���Ա�ɱ����ʵķ�Χ
private:ָ��˽�г�Ա��ֻ���ڳ�Ա�����ڱ�����
public:ָ�����г�Ա���������κεط�������
protected:ָ��������Ա
���ֹؼ��ֳ��ֵĴ������Ⱥ����û������

����һ����
class className{
	private:
		˽�����Ժͺ���
	public:
		�������Ժͺ���
	protected:
		�������Ժͺ��� 
};

�����Ա�ķ���Ȩ�� 
ȱʡΪ˽�г�Ա
class Man{
	int nAge;         // ˽�г�Ա
	char szName[20]; // ˽�г�Ա
	public:
		void SetName(char *Name){
			strcpy(szName, Name);
		}
};

�����Ա�ķ���Ȩ��
��ĳ�Ա�����ڲ������Է��ʣ�
	��ǰ�����ȫ�����ԣ�����
	ͬ�����������ȫ�����ԣ�����
��ĳ�Ա��������ĵط���
ֻ�ܹ����ʸ������Ĺ��г�Ա 
*/

class CEmployee {
	private:
		char szName[30]; // ����
	public:
		int salary;      // ����
		void setName(char *name);
		void getName(char *name);
		void averageSalary(CEmployee e1, CEmployee e2); 
};

void CEmployee::setName(char *name){
	strcpy(szName, name);  // ok
}
void CEmployee::getName(char *name){
	strcpy(name, szName);  // ok
}
void CEmployee::averageSalary(CEmployee e1, CEmployee e2){
	salary = (e1.salary + e2.salary) / 2;
}

int main(){
	CEmployee e;
	strcpy(e.szName, "Tom1234567889"); //��������ܷ���˽�г�Ա
	e.setName("Tom");  // ok
	e.salary = 5000;   // ok
	return 0; 
}
/*
����˽�г�Ա��Ŀ��
	ǿ�ƶԳ�Ա�����ķ���һ��Ҫͨ����Ա��������
 ����˽�г�Ա�Ļ��� -- ���� 
*/
/*
szName -> char szName[5]  // �����array�ĳ��ȱ��5�����ᱨ����Խ��Ĵ���
���szName����˽�У���Ҫ�޸�ȫ������szName�������䣺
	strcpy(man1.szName, "Tom1234567889");
�����szName��Ϊ˽�У�
���ж�szName�ķ��ʶ���ͨ����Ա����������,
	man1.setName("Tom12345678909887"); 
ֻҪȥ�޸ĳ�Ա�����ͺ� 
*/
