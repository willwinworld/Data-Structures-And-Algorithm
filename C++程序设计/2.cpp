#include <iostream>
#include <stdio.h>
using namespace std;


// void qsort(void *base, int nelem, unsigned int width)
// int (*pfCompare)(const void *, const void *)
// base: �������������ʼ��ַ
// nelem: �����������Ԫ�ظ���
// width: �����������ÿ��Ԫ�صĴ�С(���ֽ�Ϊ��λ)
// pfCompare:�ȽϺ����ĵ�ַ
// pfCompare:����ָ�룬��ָ��һ�����ȽϺ�������
// �ñȽϺ���ӦΪ������ʽ: int ��������const void * elem1, const void * elem2)
// �������һ�����ϱȽϲ�����λ�õĹ��̡�
// qsort������ִ���ڼ䣬��ͨ��pfCompareָ�����"�ȽϺ���",����ʱ��Ҫ�Ƚϵ�����Ԫ�صĵ�ַ����"�ȽϺ���"
// Ȼ�����"�ȽϺ���"����ֵ�ж�����Ԫ���ĸ�Ӧ������ǰ��


int MyCompare(const void *elem1, const void *elem2)
{
	unsigned int * p1, * p2;
	p1 = (unsigned int *) elem1; // " *elem1" �Ƿ�
	p2 = (unsigned int *) elem2; // " *elem2" �Ƿ�
	return (*p1 % 10) - (*p2 % 10); // ˭�ĸ�λ��С˭��Ӧ������ǰ�� 
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

// ��������10 11 123 4 8
 

