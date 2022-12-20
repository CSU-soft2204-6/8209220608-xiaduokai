#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int C, a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c)
	{
		if ((a + c) > b)
		{
			if ((b + c) > a)
			{
				C = a + b + c;
				cout << C << endl;
				if (a == b || a == c || b == c)
				{
					cout << "此三角形是等腰三角形" << endl;
				}
				else cout << "此三角形不是等腰三角形" << endl;
			}
			else cout << "error";
		}
		else cout << "error";
	}
	else cout << "error";
	if (a == b || a == c || b == c)
		return 0;

}

