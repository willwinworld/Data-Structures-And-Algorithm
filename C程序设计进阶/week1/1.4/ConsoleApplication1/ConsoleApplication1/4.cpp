#include<iostream>
#include<stdbool.h>
#include<iomanip>
using namespace std;

struct date
{
	int month;
	int day;
	int year;
};

/*
1.分成三种情况，年末，月末，普通
2.判断是否是闰年
3.计算一个月有多少天*/

bool isLeapYear(struct date d)
{
	int year = d.year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int countDays(struct date d)
{   
	int days;
	bool response = isLeapYear(d);
	if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12)
	{
		days = 31;
	}
	else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
	{
		days = 30;
	}
	else if (response && d.month == 2)
	{
		days = 29;
	}
	else
	{
		days = 28;
	}

	return days;
}

struct date tomorrow(struct date d)
{   
	struct date tomorrow;
	int countDays(struct date d);
	if (d.day != countDays(d))  // 普通
	{
		tomorrow.day = d.day + 1;
		tomorrow.month = d.month;
		tomorrow.year = d.year;
	}
	else if (d.day == countDays(d) && d.month != 12) // 月末
	{
		tomorrow.day = 1;
		tomorrow.month = d.month + 1;
		tomorrow.year = d.year;
	}
	else if (d.day == 31 && d.month == 12)  // 年末
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = d.year + 1;
	}

	return tomorrow;
}

int main()
{
	struct date tomorrow(struct date d);
	struct date thisDay, nextDay;

	cout << "Enter today's date (mm dd yyyy): ";
	cin >> thisDay.month >> thisDay.day >> thisDay.year;

	nextDay = tomorrow(thisDay);
	cout << "Tomorrow's date is: " << nextDay.month << "-" << setw(2) << setfill('0') << nextDay.day << "-" << setw(2) << setfill('0') << nextDay.year << endl;
    
	return 0;
}