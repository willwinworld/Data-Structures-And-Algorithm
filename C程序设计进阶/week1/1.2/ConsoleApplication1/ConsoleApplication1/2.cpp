#include <iostream>
using namespace std;

void printRanking()
{
	// pÛ¶Ñôºş£¬ d¶´Í¥ºş£¬ tÌ«ºş£¬ hºéÔóºş
	for (int p = 1; p < 5; p++)
	{
		for (int d = 1; d < 5; d++)
		{
			if (d == p)
			{
				continue;
			}
			for (int t = 1; t < 5; t++)
			{
				if ((t == d) || (t == p))
				{
					continue;
				}
				for (int h = 1; h < 5; h++)
				{
					if ((h == t) || (h == p) || (h == d))
					{
						continue;
					}
					if (((d == 1) + (h == 4) + (p == 3) == 1) && ((h == 1) + (d == 4) + (p == 2) + (t == 3) == 1) && ((h == 4) + (d == 3) == 1) && ((p == 1) + (t == 4) + (h == 2) + (d == 3) == 1))
					{
						cout << p << endl << d << endl << t << endl << h << endl;
					}
				}
			}
		}
	}
}

int main()
{
	printRanking();

	return 0;
}
