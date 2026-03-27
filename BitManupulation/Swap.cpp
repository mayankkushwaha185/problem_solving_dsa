#include <bits/stdc++.h>
using namespace std;

void swapXor(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 5;
    int b = 6;
    swapXor(a, b);
    cout << "a = " << a << ", b= " << b << endl;
    return 0;
}