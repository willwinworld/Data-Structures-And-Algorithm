#include <iostream>
#include <stdio.h> 
#include <math.h>
#include <string.h>
using namespace std;

/*
��һ��ѧ����Ϣ��������У�
Ҫ��ʵ��һ������ѧ�����࣬
�������г�Ա������Ӧ����˽�еġ�
*/
class Student {
	private:
		char student_name[30];  // ����
		int  student_age;  // ����
		char student_id[30];  // ѧ��
		int first_year_average;  // ��һѧ��ƽ���ɼ�
		int second_year_average;  // �ڶ�ѧ��ƽ���ɼ�
		int third_year_average;  // ����ѧ��ƽ���ɼ�
		int fourth_year_average;  // ����ѧ��ƽ���ɼ�
	public:
		void setName(char *name);
		char * getName();
		void setAge(int age);
		int getAge();
		void setId(char *id);
		char * getId();
		void setFirst(int first);
		void setSecond(int second);
		void setThird(int third);
		void setFourth(int fourth);
		double calculate_average();
};

void Student::setName(char * name){
	strcpy(student_name, name);  
}
char * Student::getName(){
	return student_name;
}
void Student::setAge(int age){
	student_age = age;
}
int Student::getAge(){
	return student_age;
}
void Student::setId(char * id){
	strcpy(student_id, id);
}
char * Student::getId(){
	return student_id;
}
void Student::setFirst(int first){
	first_year_average = first;	
};
void Student::setSecond(int second){
	second_year_average = second;	
};
void Student::setThird(int third){
	third_year_average = third;	
};
void Student::setFourth(int fourth){
	fourth_year_average = fourth;
};
double Student::calculate_average(){
	int sum = first_year_average + second_year_average + third_year_average + fourth_year_average;
	double res = sum / 4.0;
	return res;
};

int main(){
	Student s;
	char student_name[30];
	int student_age;
	char student_id[30];
	int first, second, third, fourth;
//	scanf("%d, %d, %d, %d", &first, &second, &third, &fourth);
	scanf("%s", student_name);
	scanf("%s", student_id);
	scanf("%d,%d,%d,%d,%d", &student_age, &first, &second, &third, &fourth);
	/*
	����ԭ�򣺻Ὣ�������ݶ���һ��ʼ��char��������,�������ģʽ���Կ���
	�����ô���%s��ʽ�ַ���scanf()��������ȡһ���ַ�������ȡ���̽�һֱ�������ո��Ʊ������ĩ��
	��ˣ����
	char string[81];
	scanf("%s", string);
	��Ч�����Ƕ������ն˴����м�����ַ������������洢���ַ�����string�С�
	ע�⣺����ǰ��scanf()���ò�ͬ���ǣ��ڶ�ȡ�ַ���ʱ��û����������֮ǰ����& 
	*/
	s.setName(student_name);
	s.setAge(student_age);
	s.setId(student_id);
	s.setFirst(first);
	s.setSecond(second);
	s.setThird(third);
	s.setFourth(fourth);
	printf("%s,%d,%s,%.0lf", s.getName(), s.getAge(), s.getId(), s.calculate_average());
	return 0;
}
