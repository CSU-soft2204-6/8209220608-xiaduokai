#include <iostream>
using namespace std;
int num(int day)
{ 
	int t;
	if (day == 1)
		t = 1;
	else t = ((num(day - 1)+1)*2);
	return t;
}
int main()
{
	int day = 10;
	cout <<"第一天摘了" << num(day)<<"个桃子";
}

