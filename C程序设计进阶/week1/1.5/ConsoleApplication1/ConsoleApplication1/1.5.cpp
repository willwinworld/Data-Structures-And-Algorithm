#include <iostream>
using namespace std;

int main()
{
	int n; // nΪϸ��������
	int id[100]; // id��¼ϸ���ı�� 
	double rate[100]; // rate��¼ϸ���ķ�ֳ��

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}
	
	//for (int i = 0; i < n - 1; i++)  // ѡ������
	//{
	//	for (int j = i + 1; j < n; j++)
	//	{
	//		if (rate[i] > rate[j])
	//		{
	//			int temp = rate[i];
	//			rate[i] = rate[j];
	//			rate[j] = temp;
	//		}
	//	}
	//}

	//for (int i = 0; i < n - 1; i++)  // �Է�ֳ�ʽ����������У�ð������
	//{
	//	for (int j = 0; j < n - i -1; j++)  // -i��ÿһ�αȽϵ�Ԫ�ؼ��٣�-1: ����Ǳ�Խ��
	//	{
	//		if (rate[j+1] > rate[j])
	//		{
	//			double tempRate = rate[j];
	//			rate[j] = rate[j+1];
	//			rate[j+1] = tempRate;
	//		}
	//	}
	//}
    
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (rate[j + 1] > rate[j]) {
				int tmpId = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmpId;
				double tmpRate = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmpRate;
			}
		}
	}

	// ��¼���Ĳ�
	double maxDiff = 0;
	// ��������±�
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++) {  // ע��������n-1,�����n, �����һ��ѭ����Խ��
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff) {
			maxDiff = diff;
			maxDiffIndex = i;
		}
	}

	//�����ֳ�ʽϴ������ϸ��
	cout << maxDiffIndex + 1 << endl;
	for (int i = maxDiffIndex; i >= 0; i--) {
		cout << id[i] << endl;
	}

	//�����ֳ�ʽ�С������ϸ��
	cout << n - maxDiffIndex - 1 << endl;
	for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
		cout << id[i] << endl;
	}
	return 0;
}