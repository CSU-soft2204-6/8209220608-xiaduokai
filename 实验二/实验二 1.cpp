#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char m;
	cout << "please input a character:";
	cin >> m;
	if (m >= 'a' && m <= 'z')
	{
		m = m - 32;
		cout << m << endl;
	}
	else if (m >= 'A' && m <= 'Z')
	{
		m = m + 1;
		cout << static_cast<int>(m) << endl;
	}
	return 0;

}

