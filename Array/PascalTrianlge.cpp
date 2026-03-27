#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> genrate(5, 1);
    for (int i = 0; i < genrate.size(); i++)
    {
        cout << genrate[i] << endl;
    }
}