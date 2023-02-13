#include <iostream>
#include<map>
using namespace std;
#include<string>

class number {
public:
    int num;
    number(int number) {
        this->num = number;
    }
};

class person {
public:
    string name;
    int age;
    person(string name,int age) {
        this->name = name;
        this->age = age;
    }
};

class compare1 {
public:
    bool operator ()(int v1,int v2)const
    {
        return v1 > v2;
    }
};

class compare2 {
public:
    bool operator ()(number n1, number n2)const
    {
        return n1.num > n2.num;
    }
};
void test() {
    map<int, int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(map<int,int>::value_type(3, 30));
    m.insert(make_pair(4, 40));
    m[2] = 20;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << it->second << endl;
    }
    cout << endl;

    
    map<int, int,compare1>m2;
    m2.insert(pair<int, int>(1, 10));
    m2.insert(map<int, int>::value_type(3, 30));
    m2.insert(make_pair(4, 40));
    m2[2] = 20;
    for (map<int, int,compare1>::iterator it = m2.begin(); it != m2.end(); it++)
    {
        cout << (*it).first << " " << it->second << endl;
    }
    cout << endl;


    number n1(1);
    number n2(2);
    number n3(3);
    person p1("a", 10);
    person p2("b", 20);
    person p3("c", 30);
    map<number, person,compare2>map1;
    map1.insert(make_pair(n2, p2));
    map1.insert(make_pair(n1, p1));
    map1.insert(make_pair(n3, p3));
    for (map<number, person, compare2>::iterator it = map1.begin(); it != map1.end(); it++)
    {
        cout << (*it).first.num << " " << it->second.name << " " << (*it).second.age<<endl;
    }
}
int main()
{
    test();
}

