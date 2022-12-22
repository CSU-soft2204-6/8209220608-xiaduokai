#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2)
{
	int z = size1 + size2;
	int* z1 = new int[z];
	for (int d = 0; d < size1; d++)
	{
		z1[d] = list1[d];
	}
	for (int d = 0; d < z; d++, size1++)
	{
		z1[size1] = list2[d];
	}

	for (int b = 0; b < z - 1; b++)
	{
		for (int c = b + 1; c < z; c++)
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

	for (int b = 0; b < z; b++)
		cout << z1[b] << "  ";
	delete[]list1;
	delete[]list2;
	delete[]z1;
}
int main()
{
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
	merge(p, n, q, m);
	return 0;
}