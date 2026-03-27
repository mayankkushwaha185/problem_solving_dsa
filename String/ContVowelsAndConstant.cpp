#include <iostream>
using namespace std;

int main()
{
    char A[] = "How are   You";
    int word = 1;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ' && A[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << word;

    // int vcount = 0;
    // int ccount = 0;
    // for (int i = 0; A[i] != '\0'; i++)
    // {
    //     if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
    //     {
    //         vcount++;
    //     }
    //     else if (A[i] >= 'A' && A[i] <= 'Z' || A[i] >= 'a' && A[i] <= 'z')
    //     {
    //         ccount++;
    //     }
    // }
    // cout << vcount;
    // cout << ccount;
}