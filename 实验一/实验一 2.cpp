#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, h, V;
	cin >> r >> h;
	V = r * r * h * pi / 3;
	cout << V << endl;
}
