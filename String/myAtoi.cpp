#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int myAtoi(string s)
{
    int num = 0;
    int i = 0;
    int sign = 1;
    int n = s.size();
    while (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i < n && s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (i < n && s[i] == '+')
    {
        i++;
    }
    while (i < n && isdigit(s[i])) // isdigits ek cpp function hai digit check karne ko
    {
        int digit = s[i] - '0';

        if (num > (INT_MAX - digit) / 10)
            return (sign == 1) ? INT_MAX : INT_MIN;

        num = num * 10 + digit;
        i++;
    }

    return num * sign;
}

int main()
{
    string s = "  567";
    int result = myAtoi(s);
    cout << result;
}