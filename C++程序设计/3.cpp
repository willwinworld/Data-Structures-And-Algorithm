#include <iostream>
#include <stdio.h> 
using namespace std;

/*
int main(int argc, char * argv[])
{
...
}
argc: ������������ʱ�������в����ĸ�����c/c++���Թ涨��
ִ�г����������ļ�����Ҳ��һ�������в�������ˣ�argc��ֵ������1�� 
argv: ָ�����飬���е�ÿ��Ԫ�ض���һ��char* ���͵�ָ�룬��ָ��ָ��һ���ַ�����
����ַ�����ʹ���������в�����
���磬argv[0]ָ����ַ������ǵ�һ�������в���������ִ�г�����ļ�����
argv[1]ָ��ڶ��������в�����argv[2]ָ������������в����� 
*/ 

int main(int argc, char * argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}

/* 
char �ַ���
char * �ַ���ָ�룬ָ��һ���ַ�
char ** ָ���ַ���ָ���ָ��
int main(int argc, char** argv);
��ͬ��int main(int argc, char* argv[])
��ͬ��int main(int argc, string argv) (c�����в��������ַ������ͣ��˴�������⣬����ʹ��string����) 
�ɴ˿���char**ʵ���Ͼ���ָ��һϵ���ַ����������ַ��� 
*/
