#include <iostream>
using namespace std;

class Employee
{
protected:
    int salary;
};

class Progammer : public Employee
{
public:
    int bonus;
    void setSalry(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Progammer myObj;
    myObj.setSalry(234);
    cout << myObj.getSalary();
}