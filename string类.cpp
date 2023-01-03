#include <iostream>
#include<vector>
using namespace std;
int main()
{
    const char* cr = "12345";
    std::string str("123456789");
    cout << str << endl;
    std::string str1(cr, 3);
        cout << str1 << endl;
        std::string str2(10, '5');
        cout << str2 << endl;
        cout << str2.size() << endl;
        cout << str2.length() << endl;
        str2.append(str, 3, 2);
        cout << str2 << endl;
        str2.assign("123456789");
        cout << str2 << endl;
        cout<<str2.compare(str) << endl;
        str2.insert(3, str, 3, 3);
        string str3 = str2.substr(3, 3);
        cout << str3 << endl;
        cout << str2.find("456") << endl;
        str3.replace(0, 1, str2);
        cout << str3 << endl;
        str3.swap(str2);
        cout << str3 << endl;
        str3 += str2;
        cout << str3 << endl;
        cout << str3[3] << endl;
        string::iterator it;
        for (it = str3.begin(); it != str3.end(); it++) {
            cout << *it << endl;
        }
        char* cr1 = new char[10];
        strcpy(cr1, "1234567");
        str3.copy(cr1, 5, 1);
        cr = str3.c_str();
        cr = str3.data();
        cout << str3 << endl;
        auto a = 3;
        auto b = 3.0;
        std::vector<int>az;
        int bz[10];
        char* cr2 = nullptr;
        for (int i = 0; i < 10; i++) {
            az.push_back(0);
        }
        for (int i = 0; i < 10; i++) {
            cout << az[i] << endl;
        }
        for (auto i : az) {
            cout << i << endl;
        }for (auto i : bz) {
            cout << i << endl; 
        }
        return 0;
}


