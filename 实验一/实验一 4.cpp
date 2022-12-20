 #include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;
	cout << "output in unsigned int type:" << testUnint << endl;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl; //为什么是-2？testUnint值超过了short的范围，出现错误。
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
	cout << oct << testUnint << endl;
	system("pause");
	return 0;
}