#include <iostream>
using namespace std;

int main()
{
    char name[] = "Mayank";
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        // if (name[i] >= 65 && name[i] <= 90)
        // {
        //     name[i] = name[i] + 32;
        // }
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }

    // for (i = 0; name[i] != '\0'; i++)
    // {
    //     cout << name[i];
    //     name[i] = name[i] - 32;
    //     cout << name[i] << endl;
    // }
    cout << name;
}