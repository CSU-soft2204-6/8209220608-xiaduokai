#include <iostream>
#include<set>
using namespace std;
#include<string>
class person {
public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class compare {
public:
    bool operator()(const person& p1, const person& p2)const
    {
        return p1.age < p2.age;
    }
};

void test() {
    person p1("a", 10);
    person p2("b", 5);
    person p3("c", 45);
    person p4("d", 40);
    set<person,compare>s;
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    for (set<person, compare>::iterator it = s.begin(); it != s.end(); it++) {
        cout <<it->name << " "<<it->age<<endl;
    }

}


int main()
{
    test();
    return 0;
}


