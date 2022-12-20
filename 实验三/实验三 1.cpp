#include <iostream>
using namespace std;
int A(int n, int m)
{
	int a, b;
	a = m > n ? n : m;
	for (int i = 1; i <= a; i++)
	{
		if (m % i == 0 && n % i == 0)
			b = i;
	}
     return b;
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << "最大公约数为" << A(x, y) << endl;
	cout << "最小公倍数为" << x*y/A(x,y);
	return 0;
}

