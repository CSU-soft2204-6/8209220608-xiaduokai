#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void print(int v) {
    cout << v << " ";
}

class person {
public:
    string name;
    int age;

    person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    bool operator ==(const person& p) {
        if (this->name == p.name && this->age == p.age)
            return true;
        else return false;
    }
};

class p {
public:
    void operator ()(int v) {
        cout<<v<<" ";
    }
};

class t {
public:
    int operator ()(int v) {
        return v-1;
    }
};

class greatfive {
public:
    bool  operator ()(int v) {
        return v > 5;
     }
};

class great20 {
public:
    bool operator ()(person& p) {
        return p.age > 20;
    }
};

class greater20 {
public:
    bool operator ()(int v) {
        return v > 5;
    }
};

void suanfa() {
    vector<int>v;
    for (int i = 1; i <= 10;i++) {
        v.push_back(i);
    }
    for_each(v.begin(), v.end(), print);
    cout << endl;

    vector<int>target;
    target.resize(v.size());
    transform(v.begin(), v.end(), target.begin(), t());
    for_each(target.begin(), target.end(), p());

    cout << endl;
    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it == v.end())
        cout << "未找到" << endl;
    else cout << "找到了" << endl;

    person p1("aaa", 10);
    person p2("bbb", 20);
    person p3("ccc", 30);
    vector<person>v2;
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    vector<person>::iterator it2 = find(v2.begin(), v2.end(), p1);
    if (it2 == v2.end())
        cout << "未找到" << endl;
    else cout << "找到了" << endl;

    vector<int>::iterator it3 = find_if(v.begin(), v.end(), greatfive());
    if (it3 == v.end())
        cout << "未找到" << endl;
    else {
        cout << "找到了";
        for (; it3 != v.end(); it3++)
            cout << *it3 << " ";
         }
    cout << endl;

    vector<person>::iterator it4 = find_if(v2.begin(), v2.end(), great20());
    if (it4 == v2.end())
        cout << "未找到" << endl;
    else {
        cout << "找到了" << it4->name << " " << (*it4).age << endl;;
    }

    bool ret=binary_search(v.begin(), v.end(), 5);
    if (ret)
    {
        cout << "find!" << endl;
    }
    else cout << "not find!" << endl;

    person p("aaa", 10);
    int num= count(v2.begin(), v2.end(), p);
    cout << num << endl;;

    int num2 = count_if(v.begin(), v.end(), greater20());
    cout << num2 << endl;

    int num3 = count_if(v2.begin(), v2.end(), great20());
    cout << num3 << endl;

}


int main()
{
    suanfa();
}

