#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char c;
	cin >> c;
	for (int i = 1; i <= 5; i++)
	{
		cout << setw(6 - i);
		for (int x = 0; x < i; x++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;

}


