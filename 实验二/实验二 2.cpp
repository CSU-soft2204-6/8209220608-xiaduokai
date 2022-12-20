#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float  x, y;
	cin >> x;
	if ((0 < x) && (x < 1))
	{
		y = 3 - 2 * x; cout << y;
	}
	else if ((1 <= x) && (x < 5))
	{
		y = 2 / (4 * x) + 1; cout << y;
	}
	else if ((5 <= x) && x < 10)
	{
		y = x * x; cout << y;
	}
	else cout << "x不在定义域内";
	return 0;

}

