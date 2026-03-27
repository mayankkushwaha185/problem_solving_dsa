#include <iostream>
using namespace std;

bool isPalindrome(char arr[])
{
    int i;
    for (i = 0; arr[i] != 0; i++)
    {
    };
    i = i - 1;
    for (int j = 0; j < i; j++, i--)
    {
        if (arr[i] == arr[j])
        {
            cout << "Ha hai";
            return true;
        }
    }
    cout << "nahi hai bhai";
    return false;
}
int main()
{

    char A[] = "madamw";
    isPalindrome(A);
}