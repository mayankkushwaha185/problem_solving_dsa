#include <iostream>
using namespace std;

class MyClass
{
public:
    void myMethod()
    {
        cout << "Hello World";
    }

    void myMetod2();
};

void MyClass::myMetod2()
{
    cout << "Hello World 2";
}

class Dog
{
public:
    void bark(string sound)
    {
        cout << sound;
    }
};

int main()
{
    Dog tommy;
    tommy.bark("Woof!");
    // MyClass meth;
    // meth.myMetod2();
    // meth.myMethod();
}