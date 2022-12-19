#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[10];
	int i, j;
	bool t = 1;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < 10; i++, t = 1)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				t = 0;
		}
		if (t == 1) cout << a[i] << setw(2);
	}
}

