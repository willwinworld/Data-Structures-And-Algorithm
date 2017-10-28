#include <iostream>
using namespace std;

int main() {  // Ҫ��д�ɱ䳤���������࣬ʹ֮������ʹ�ã�
	CArray a; // ��ʼ��������ǿյ�
	for (int i = 0; i < 5; ++i)
		a.push_back(i); // Ҫ�ö�̬������ڴ�������Ԫ�أ���Ҫһ��ָ���Ա����
	CArray a2, a3;
	a2 = a;  // Ҫ����"="
	for (int i = 0; i < a.length(); ++i)
		cout << a2[i] << " ";  // Ҫ����"[]"
	a2 = a3; // a2�ǿյ�
	for (int i = 0; i < a2.length(); ++i)  // a2.length()����0
		cout << a2[i] << "";
	cout << endl;
	a[3] = 100;
	CArray a4(a);  // Ҫ�Լ�д���ƹ��캯��
	for (int i = 0; i < a4.length(); ++i)
		cout << a4[i] << "";
	return 0;
}

class CArray {
	int size; // ����Ԫ�صĸ���
	int *ptr; // ָ��̬���������
public:
	CArray(int s = 0);  //s��������Ԫ�صĸ���,ȱʡֵ����
	CArray(CArray & a);
	~CArray();
	void push_back(int v);  //����������β�����һ��Ԫ��v
	CArray & operator=(const CArray &a);
	//������������ĸ�ֵ
	int length() { return size; }//��������Ԫ�ظ���
	int & CArray::operator[](int i)//����ֵΪint���У���֧��a[i]=4,����int�͵�����
	{
		//����֧�ָ����±��������Ԫ��
		// ��n=a[i]��a[i]=4;���������,дa[i]=4��ϣ���޸�a[i]��ֵ��ϣ���ﵽ��Ŀ����a������������±�Ϊi��Ԫ��Ӧ�ñ��޸ģ���ptr[i]),ϣ�������������޸�ptr[i],�Ǹ�ֵ�����Ӧ����ptr[i]������
		return ptr[i];
	}
	CArray::CArray(int s):size(s) {  // ���캯��
		if (s == 0)
			ptr = NULL;
		else
			ptr = new int[s];
	}
	CArray::CArray(CArray & a) {
		if (!a.ptr) {
			ptr = NULL;
			size = 0;
			return;
		}
		ptr = new int[a.size];
		memcpy(ptr, a.ptr, sizeof(int)*a.size);
		size = a.size;
	}
	CArray::~CArray() {
		if (ptr)delete[]ptr;
	}
	CArray & CArray::operator=(const CArray &a) {
		//��ֵ�ŵ�������ʹ"="��߶������ŵ����飬��С�����ݶ����ұߵĶ���һ��
		if (ptr == a.ptr) // ��ֹa=a�����ĸ�ֵ���³���
			return *this;
		if (a.ptr == NULL) { // ���a����������ǿյ�
			if (ptr) delete[]ptr;
			ptr = NULL;
			size = 0;
			return *this;
		} 
		if (size < a.size) {  // ���ԭ�пռ乻�󣬾Ͳ��÷����µĿռ�
			if (ptr)
				// ֻ�е�ԭ�пռ䲻���õ�ʱ�򣬲�ȥ�ͷ�ԭ�пռ�
				delete[]ptr;
			ptr = new int[a.size];  // ���ҷ����µĿռ�
		}
		memcpy(ptr, a.ptr, sizeof(int)*a.size);  // ���ԭ�пռ乻���ˣ���ֱ�Ӱ�ԭ�пռ俽������������
		size = a.size;
		return *this;
	} // CArray & CArray::operator=(const CArray &a)
	void CArray::push_back(int v) {
		// ������β�����һ��Ԫ��
		if (ptr) {
			int * tmpPtr = new int[size + 1]; // ���·���ռ�
			memcpy(tmpPtr, ptr, sizeof(int)*size) // ����ԭ��������
			delete[] ptr;
			ptr = tmpPtr;
		}
		else {
			// ���鱾���ǿյ�
			ptr = new int[1];
		}
		ptr[size++] = v; //�����µ�����Ԫ��
	}
};  