#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>  //  reverse����������ӵ�ͷ�ļ� 
using namespace std;


/*�治�ᰡ������ֻ�ܳ������ˡ�����*/
class BigInt {
private:
	string values; // ��������λ�ϵ�����
	bool flag; // true��ʾ������false��ʾ������0Ĭ��Ϊ����
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
	BigInt(string str) {  // ����ת�����캯����Ĭ��Ϊ��������
		values = str;
		flag = true;
	}
public:
	friend ostream& operator << (ostream& os, const BigInt& bigInt);  // �������������
	friend istream& operator >> (istream& is, const BigInt& bigInt);  // �������������
	BigInt operator+(const BigInt& rhs);  // �ӷ���������
	BigInt operator-(const BigInt& rhs); //  ������������
	BigInt operator*(const BigInt& rhs); // �˷���������
	BigInt operator/(const BigInt& rhs); // ������������
};
/*
��������ȡ�����"<<", ���һ������
*/
ostream& operator << (ostream& os, const BigInt& bigInt) {
	if (!bigInt.flag)
		os << '-';
	os << bigInt.values;
	return os;
}
/*
��������ȡ�����">>", ����һ��������
*/
istream& operator >> (istream& is, const BigInt& bigInt) {
	string str;
	is >> str;
	bigInt.values = str;
	bigInt.flag = true;
	return is;
}