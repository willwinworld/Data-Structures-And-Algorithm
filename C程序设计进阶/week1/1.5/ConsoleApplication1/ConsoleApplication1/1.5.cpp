#include <iostream>
using namespace std;

int main()
{
	int n; // n为细菌的数量
	int id[100]; // id记录细菌的编号 
	double rate[100]; // rate记录细菌的繁殖率

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}
	
	//for (int i = 0; i < n - 1; i++)  // 选择排序
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

	//for (int i = 0; i < n - 1; i++)  // 对繁殖率进行升序排列，冒泡排序
	//{
	//	for (int j = 0; j < n - i -1; j++)  // -i让每一次比较的元素减少，-1: 避免角标越界
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

	// 记录最大的差
	double maxDiff = 0;
	// 和最大差的下标
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++) {  // 注意这里是n-1,如果是n, 则最后一次循环会越界
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff) {
			maxDiff = diff;
			maxDiffIndex = i;
		}
	}

	//输出繁殖率较大的那组细菌
	cout << maxDiffIndex + 1 << endl;
	for (int i = maxDiffIndex; i >= 0; i--) {
		cout << id[i] << endl;
	}

	//输出繁殖率较小的那组细菌
	cout << n - maxDiffIndex - 1 << endl;
	for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
		cout << id[i] << endl;
	}
	return 0;
}