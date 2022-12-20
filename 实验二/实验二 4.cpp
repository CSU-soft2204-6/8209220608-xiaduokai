
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, c;
	char b;
	cin >> a >> b >> c;
	switch (b)
	{
	case '+':
		cout << a + c << endl;
		break;
	case '-':
		cout << a - c << endl;
		break;
	case '*':
		cout << a * c << endl;
		break;
	case '%':
		cout << a % c << endl;
		break;
	case '/':
		if (c == 0)
		{
			cout << "除数不能为0" << endl;
		}
		else
		{
			cout << a / c << endl;
		}
		break;
	default:
		cout << "error" << endl;
	}
	return 0;

}


