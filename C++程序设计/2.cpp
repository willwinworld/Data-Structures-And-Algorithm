#include <iostream>
#include <stdio.h>
using namespace std;


// void qsort(void *base, int nelem, unsigned int width)
// int (*pfCompare)(const void *, const void *)
// base: 待排序数组的起始地址
// nelem: 待排序数组的元素个数
// width: 待排序数组的每个元素的大小(以字节为单位)
// pfCompare:比较函数的地址
// pfCompare:函数指针，它指向一个“比较函数”。
// 该比较函数应为以下形式: int 函数名（const void * elem1, const void * elem2)
// 排序就是一个不断比较并交换位置的过程。
// qsort函数在执行期间，会通过pfCompare指针调用"比较函数",调用时将要比较的两个元素的地址传给"比较函数"
// 然后根据"比较函数"返回值判断两个元素哪个应该排在前面


int MyCompare(const void *elem1, const void *elem2)
{
	unsigned int * p1, * p2;
	p1 = (unsigned int *) elem1; // " *elem1" 非法
	p2 = (unsigned int *) elem2; // " *elem2" 非法
	return (*p1 % 10) - (*p2 % 10); // 谁的个位数小谁就应该排在前面 
} 


#define NUM 5
int main()
{
	unsigned int an[NUM] = {8, 123, 11, 10, 4};
	qsort(an, NUM, sizeof(unsigned int), MyCompare);
	for(int i=0; i < NUM; i++)
		printf("%d", an[i]);
		printf(" ");
	return 0;
}

// 输出结果：10 11 123 4 8
 

