#include <iostream>
using namespace std;
void count(char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int j = 0; j < 100; j++)
	{
		if ((s[j] <= 90) && (s[j] >= 65))
		{
			counts[s[j] - 65]++;
		}
		else if ((s[j] <= 122) && (s[j] >= 97))
		{
			counts[s[j] - 97]++;
		}
	}
}
void show(int counts[])
{
	for (int t = 0; t < 26; t++)
		if (counts[t] != 0)
		{
			cout << static_cast<char>('a' + t) << ":" << counts[t] << "times" << endl;
		}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "请输入字符串:" << endl;
	cin.getline(s, 100);
	count(s, counts);
	show(counts);
	return 0;
}
