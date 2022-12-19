#include <iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = 1;
	}
	for (int n = 2; n < 100; n++)
	{
		for (int j = 0; j < 100; j = j + n + 1)
		{
			if (a[j] == 0)
				a[j] = 1;
			else a[j] = 0;
		}
	}
	for (int k = 0; k < 100; k++)
	{
		if (a[k] == 1) cout << k + 1 << " ";
	}
	return 0;
}

