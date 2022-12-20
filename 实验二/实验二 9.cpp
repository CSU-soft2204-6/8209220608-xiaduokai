#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double price = 0.8, average, sum, a, day;
	for (a = 2, sum = 0, day = 0; sum < 100; a = a * 2, day++)
	{
		sum = sum + a;
	}
	a = a / 2; sum = sum - a; day = day - 1;
	average = sum * price / day;
	cout << average;

}
