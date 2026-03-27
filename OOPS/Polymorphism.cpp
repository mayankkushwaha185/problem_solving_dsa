#include <iostream>
using namespace std;

class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes sound \n";
    }
};

class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};
class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog says: bow bow\n";
    }
};

int main()
{
    Animal myanimal;
    myanimal.animalSound();
    Pig babypig;
    babypig.animalSound();
    Dog babyDog;
    babyDog.animalSound();
}