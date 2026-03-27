#include <iostream>
using namespace std;

class vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Peep!";
    }
};
class car : public vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    car myCar;
    myCar.honk();
    cout << myCar.brand << endl;
}