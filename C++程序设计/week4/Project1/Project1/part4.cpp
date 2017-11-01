#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>  //  reverse函数所需添加的头文件 
using namespace std;


/*真不会啊。。。只能抄代码了。。。*/
class BigInt {
private:
	string values; // 保存所有位上的数字
	bool flag; // true表示正数，false表示负数，0默认为正数
	inline int compare(string s1, string s2) {
		if (s1.size() < s2.size())
			return -1;
		else if (s1.size() > s2.size())
			return 1;
		else
			return s1.compare(s2);
	}
public:
	BigInt() :values("0"), flag(true) {};
	BigInt(string str) {  // 类型转换构造函数（默认为正整数）
		values = str;
		flag = true;
	}
public:
	friend ostream& operator << (ostream& os, const BigInt& bigInt);  // 重载输出操作符
	friend istream& operator >> (istream& is, const BigInt& bigInt);  // 重载输入操作符
	BigInt operator+(const BigInt& rhs);  // 加法操作重载
	BigInt operator-(const BigInt& rhs); //  减法操作重载
	BigInt operator*(const BigInt& rhs); // 乘法操作重载
	BigInt operator/(const BigInt& rhs); // 除法操作重载
};
/*
重载流提取运算符"<<", 输出一个整数
*/
ostream& operator << (ostream& os, const BigInt& bigInt) {
	if (!bigInt.flag)
		os << '-';
	os << bigInt.values;
	return os;
}
/*
重载流提取运算符">>", 输入一个正整数
*/
istream& operator >> (istream& is, const BigInt& bigInt) {
	string str;
	is >> str;
	bigInt.values = str;
	bigInt.flag = true;
	return is;
}