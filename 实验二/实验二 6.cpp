
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m, n, a, b;
	cin >> m >> n;
	a = m > n ? n : m;
	for (int i = 1; i <= a; i++)
	{
		if (m % i == 0 && n % i == 0)
			b = i;
	}
	cout << "最大公约数 " << b << endl;
	cout << "最小公倍数" << m * n / b;
	return 0;
}


