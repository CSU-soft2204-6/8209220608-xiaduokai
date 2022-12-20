#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char x;
	cout << "请输入一串任意字符： \n";
	while ((x = getchar()) != '\n')
	{
		if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
		{
			a++;
		}
		else if (x == ' ')
		{
			b++;
		}
		else if (x >= '0' && x <= '9')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "letter :" << a << endl;
	cout << "space :" << b << endl;
	cout << "number :" << c << endl;
	cout << "other :" << d << endl;
	return 0;

}

