#include<string>
#include<list>
#include <iostream>
using namespace std;
 class person {
    public:
        string name;
        int age;
        int high;
    public:
        person(string name, int age, int high) {
            this->name = name;
            this->age = age;
            this->high = high;
        }
        person operator = (person& L) {
            name = L.name;
            age = L.age;
            high = L.high;
            return *this;
        };
 };


 bool compare(person& p1, person& p2) {
     if (p1.age == p2.age) {
         return p1.high < p2.high;
    }
     else
     return p1.age < p2.age;
 }

 void test() {
     list<person>L;
     person p1("a", 35, 170);
     person p2("b", 30, 190);
     person p3("c", 40, 150);
     person p4("d", 30, 185);
     L.push_back(p1);
     L.push_back(p2);
     L.push_back(p3);
     L.push_back(p4);


    for (list<person>::iterator it = L.begin(); it != L.end(); it++)
        cout << it->name << " " << it->age << " " << it->high << endl;
 
    L.sort(compare);

  
    cout << endl;
    for (list<person>::iterator it = L.begin(); it != L.end(); it++)
        cout << it->name << " " << it->age << " " << it->high << endl;

 }

 int main() {
     test();
 }
