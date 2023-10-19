#include <iostream>
using namespace std;
int kpn(int, int, int);
int main()
{
	cout << kpn(27, 50, 3);
	return 0;
}
int kpn(int a, int b, int k)
{
	int i, nr, s, d;
	nr = 0;
	for (i = a; i <= b; i++)
	{
		s = 0;
		for (d = 1; d*d < i; d++)
		{
			if (i % d == 0)
			{
				s += d + i/d;
			}
		}
		if (s % 2 == i % 2)
		{
			nr++;
			if (nr == k)
			{
				return i;
			}
		}
	}
	return -1;
}
