#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int a, b, m = 0, location, i, j;
	a = strlen(s1);
	b = strlen(s2);
	for (i = 0; i < b - a; i++)
	{
		for (j = 0; j < a; j++)
		{
			if (s1[j] == s2[j + i] && (j == a - 1))
			{
				return i;
			}
			if (s1[j] != s2[j + i])
			{
				break;
			}
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "请输入第一行字符串：" << endl;
	cin.getline(s1, 100);
	cout << "请输入第二行字符串：" << endl;
	cin.getline(s2, 100);
	cout << "indexOf(“ " << s1 << "”" << "“" << s2 << "”）is ：" << indexOf(s1, s2) << endl;
	return 0;
}
