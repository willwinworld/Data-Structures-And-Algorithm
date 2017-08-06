#include <iostream>
#include <stdio.h> 
#include <math.h>
#include <string>
#include <sstream>
using namespace std;


int main(void)
{
//	int a, b, c, d;
//	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
//	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
//	int sum=a+b+c+d;
//	printf("sum=%d\n", sum);
//	double average=sum/4.0;
//	printf("average=%.1lf", average);
	char name[30];
	int a;
	
	scanf("%s", name);
	scanf("%d", &a);
//	scanf("%s, %d", name, &a);
	printf("name=%s, a=%d", name, a);
	return 0;
}

