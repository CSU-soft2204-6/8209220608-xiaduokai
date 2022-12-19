#include <iostream>
using namespace std;
int main()
{
	//输入数组元素
	int n, m;
	cout << "第一个数组元素的个数：";
	cin >> n;
	cout << "第二个数组元素的个数：";
	cin >> m;
	int* p = new int[n];
	int* q = new int[m];
	cout << "输入第一个数组元素:";
	for (int i = 0; i < n; i++)
		cin >> p[i];
	cout << "输入第二个数组元素:";
	for (int j = 0; j < m; j++)
		cin >> q[j];

	//剔除数组中重复的数字
	bool t = 1; int y = 0, b = 0, c = 0;
	for (b = 0; b < n; b++, t = 1)
	{
		for (c = 0; c < b; c++)
		{
			if (p[b] == p[c])
				t = 0;
		}
		if (t == 1)
		{
			y++;
		}
	}
	int* y1 = new int[y];
	t = 1; b = 0; c = 0;
	for (b = 0; b < n; b++, t = 1)
	{
		for (c = 0; c < b; c++)
		{
			if (p[b] == p[c])
				t = 0;
		}
		if (t == 1)
		{
			static int d = 0;
			y1[d] = p[b];
			d++;
		}
	}
	t = 1; int x = 0; b = 0, c = 0;
	for (b = 0; b < m; b++, t = 1)
	{
		for (c = 0; c < b; c++)
		{
			if (q[b] == q[c])
				t = 0;
		}
		if (t == 1)
		{
			x++;
		}
	}
	int* x1 = new int[x];
	t = 1; b = 0; c = 0;
	for (b = 0; b < m; b++, t = 1)
	{
		for (c = 0; c < b; c++)
		{
			if (q[b] == q[c])
				t = 0;
		}
		if (t == 1)
		{
			static int d = 0;
			x1[d] = q[b];
			d++;
		}
	}

	//合并两个剔除重复数字后的数组
	int z = x + y;
	int* z1 = new int[z];
	for (int d = 0; d < x; d++)
	{
		z1[d] = x1[d];
	}
	for (int d = 0; d < z; d++, x++)
	{
		z1[x] = y1[d];
	}

	//排序
	for (b = 0; b < z - 1; b++)
	{
		for (c = b + 1; c < z; c++)
		{
			if (z1[b] > z1[c])
			{
				int t;
				t = z1[b];
				z1[b] = z1[c];
				z1[c] = t;
			}
		}
	}

	//输出
	for (b = 0; b < z; b++)
		cout << z1[b] << "  ";
	delete[]x1;
	delete[]y1;
	delete[]z1;
	return 0;
}