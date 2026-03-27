#include <iostream>
using namespace std;

// int printName(int n)
// {
//     if (n == 0)
//         return 0;
//     cout << n << endl;
//     printName(n - 1);
// }
// int printName2(int n)
// {
//     if (n == 0)
//         return 0;
//     printName2(n - 1);
//     cout << n << endl;
// }

// int add(int n, int sum)
// {
//     if (n == 0)
//     {
//         cout << sum << endl;
//         return 0;
//     }
//     add(n - 1, sum + n);
//     return 0;
// }

// int add2(int n)
// {
//     if (n == 0)
//         return 0;
//     return n + add2(n - 1);
// }

int fact(int n)
{
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    cout << fact(4) << endl;

    // add(4, 0);
    // cout << add2(5);
    // cout << printName(4);
}