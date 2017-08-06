#include <iostream>
#include <stdio.h> 
#include <math.h>
#include <string.h>
using namespace std;

/*
在一个学生信息处理程序中，
要求实现一个代表学生的类，
并且所有成员变量都应该是私有的。
*/
class Student {
	private:
		char student_name[30];  // 姓名
		int  student_age;  // 年龄
		char student_id[30];  // 学号
		int first_year_average;  // 第一学年平均成绩
		int second_year_average;  // 第二学年平均成绩
		int third_year_average;  // 第三学年平均成绩
		int fourth_year_average;  // 第四学年平均成绩
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
	错误原因：会将后续内容读入一开始的char型数组中,进入调试模式可以看出
	可以用带有%s格式字符的scanf()函数来读取一个字符串，读取过程将一直持续到空格，制表符或行末。
	因此，语句
	char string[81];
	scanf("%s", string);
	的效果就是读入在终端窗口中键入的字符串，并将它存储在字符数组string中。
	注意：与以前的scanf()调用不同的是，在读取字符串时，没有在数组名之前放置& 
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
