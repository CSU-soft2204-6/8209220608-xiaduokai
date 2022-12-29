#include<iostream>
using namespace std;
template<class T>
class stack {
private:
    int size;
    int top;
    T* space;
public:
    stack(int = 10);
    ~stack() {
        delete[]space;
    }
    bool push(const T&);
    T pop();
    bool isempty() const {
        return top == size;
    }
    bool isfull() const {
        return top == 0;
    }
};

template<class T>
stack<T>::stack(int size) {
    this->size = size;
    space = new T[size];
    top = size;
}
template<class T>
bool stack<T>::push(const T& element) {
    if (!isfull())
    {
        space[--top] = element;
        return true;
    }
    return false;
}
template<class T>
T stack<T>::pop() {
    return space[top++];
}

int main()
{
    stack<char>s1(4);
    s1.push('x');
    s1.push('y');
    s1.push('z');
    s1.push('u');
    s1.push('v');
    while (!s1.isempty())
        cout << s1.pop() << endl;
    return 0;
}