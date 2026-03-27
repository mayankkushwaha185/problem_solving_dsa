#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Called Constructor";
    }
};

class Car
{
public:
    string breand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
        breand = x;
        model = y;
        year = z;
    }
};
int main()
{
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("BMW2", "X6", 1998);
    cout << carObj1.breand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.breand << " " << carObj2.model << " " << carObj2.year << endl;
    // MyClass bclass;
}