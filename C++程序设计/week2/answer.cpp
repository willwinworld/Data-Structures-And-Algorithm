#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    char stName[30];
    int stAge;
    char stID[10];
    int stGrade[4];
public:
    void setName(const char* Name);
    void getName(char* Name);
    void setAge(int Age);
    void getAge(int& Age);
    void setID(const char* ID);
    void getID(char* ID);
    void setGrade(int* Grade);
    void getAverageGrade(int& AverageGrade);
};

void Student::setName(const char* Name)
{
    strcpy(stName, Name);
}

void Student::getName(char* Name)
{
    strcpy(Name, stName);
}
void Student::setAge(int Age)
{
    stAge = Age;
}
void Student::getAge(int& Age)
{
    Age = stAge;
}
void Student::setID(const char* ID)
{
    strcpy(stID, ID);
}
void Student::getID(char* ID)
{
    strcpy(ID, stID);
}
void Student::setGrade(int* Grade)
{
    for (int i = 0; i < 4; i++)
    {
        stGrade[i] = Grade[i];
    }
}
void Student::getAverageGrade(int& AverageGrade)
{
    AverageGrade = (stGrade[0]+stGrade[1]+stGrade[2]+stGrade[3])/4;
}

int main()
{
    Student NY;
    char Name[30];
    int Age;
    char ID[10];
    int Grade[4];
    int AverageGrade;
    char mark;
    cin.getline(Name, 30, ',');
    cin >> Age >> mark;
    cin.getline(ID, 10, ',');
    cin >> Grade[0] >> mark >> Grade[1] >> mark >> Grade[2] >> mark >> Grade[3];
    NY.setName(Name);
    NY.setAge(Age);
    NY.setID(ID);
    NY.setGrade(Grade);
    memset(Name, '\0', sizeof(Name));
    Age = 0;
    memset(ID, '\0', sizeof(ID));
    AverageGrade = 0;
    NY.getName(Name);
    NY.getAge(Age);
    NY.getID(ID);
    NY.getAverageGrade(AverageGrade);
    cout << Name << ',' << Age << ',' << ID << ',' << AverageGrade << endl;
    return 0;
}
