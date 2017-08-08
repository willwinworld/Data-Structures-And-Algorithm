#include <iostream>
#include <stdio.h> 
using namespace std;

/*
int main(int argc, char * argv[])
{
...
}
argc: 代表启动程序时，命令行参数的个数。c/c++语言规定，
执行程序程序本身的文件名，也算一个命令行参数，因此，argc的值至少是1。 
argv: 指针数组，其中的每个元素都是一个char* 类型的指针，该指针指向一个字符串，
这个字符串里就存放着命令行参数。
例如，argv[0]指向的字符串就是第一个命令行参数，即可执行程序的文件名，
argv[1]指向第二个命令行参数，argv[2]指向第三个命令行参数。 
*/ 

int main(int argc, char * argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}

/* 
char 字符型
char * 字符型指针，指向一个字符
char ** 指向字符型指针的指针
int main(int argc, char** argv);
等同于int main(int argc, char* argv[])
等同于int main(int argc, string argv) (c语言中并不包含字符串类型，此处便于理解，所以使用string类型) 
由此看来char**实际上就是指向一系列字符，类似于字符串 
*/
