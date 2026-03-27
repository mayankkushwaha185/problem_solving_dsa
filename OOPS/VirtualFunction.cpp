#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound \n";
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks \n";
    }
};
class cat : public Animal
{
public:
    void sound()
    {
        cout << "Mewow \n";
    }
};

int main()
{
    Animal *a;
    a = new Dog;
    a->sound();
    a = new cat;
    a->sound();
    // cout << a << endl;
    // cout << b << endl;
}