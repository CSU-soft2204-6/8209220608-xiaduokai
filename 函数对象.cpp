#include<vector>
#include <iostream>
#include<map>
#include<algorithm>
#include<functional>
using namespace std;

class five {
public:
    bool operator () (int v) {
        return v > 5;
    }
};

void test01() {
    vector<int>v;
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }
    
    vector<int>::iterator it = find_if(v.begin(), v.end(), five());
        if (it == v.end()) {
            cout << "未找到大于5的数字" << endl;
        }
        else 
        {
            cout << "找到了：";
            for (; it != v.end(); it++)
            {
                cout << *it << " ";
            }
        }
}

class compare {
public:
    bool operator()(int v1, int v2) {
        return v1 > v2;
    }
};

void test02() {
    vector<int>v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
   // sort(v.begin(), v.end(), compare());
    sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}

void test03() {
    negate<int>n;
    cout << n(50) << endl;

    plus<int>p;
    cout << p(10, 20) << endl;
}

void test04() {
    vector<bool>v1;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    vector<bool>v2;
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }

}
int main()
{
    test01();
    cout << endl;
    test02();
    cout << endl;
    test03();
    cout << endl;
    test04();
}

