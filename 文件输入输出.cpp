// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<fstream>
#include<string>
int main()
{
    ifstream ifs;
    ifs.open("text.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "打开失败" << endl;
    }
 
    string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;
    }
    ifs.close();
}


