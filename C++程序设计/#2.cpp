#include <iostream>
#include<string.h>
#include<cstdio>
using namespace std;
class Student {
private:
    int age, score1, score2, score3, score4;
    char name[100], num[100];
    int average;
public:
     Student(char aname[], int aage, char anum[],int ascore1, int ascore2, int ascore3, int ascore4) {
         strcpy(name, aname);
         age = aage;
         strcpy(num, anum);
         score1 = ascore1;
         score2 = ascore2;
         score3 = ascore3;
         score4 = ascore4;
     }
 
     int getAverage() {
         return (score1 + score2 + score3 + score4) / 4;
     }
 
     char * getName() {
         return name;
     }
 
     int getAge() {
         return age;
     }
 
     char * getNum() {
         return num;
     }
 
 };
 int main() {
     char name[100], a, num[100];
     int age, score1, score2, score3, score4;
     cin.getline(name, 100, ',');
     cin >> age;
     a = getchar();
     cin.getline(num, 100, ',');
     cin >> score1 >> a >> score2 >> a >> score3 >> a >> score4;
     Student s(name, age, num, score1, score2, score3, score4);
     cout << s.getName() << "," << s.getAge() << "," << s.getNum() << "," << s.getAverage();
     return 0;
 }
