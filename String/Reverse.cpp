#include <iostream>
using namespace std;

int main()
{

    char A[] = "Python";
    int i, j;
    for (i = 0; A[i] != '\0'; i++)
    {
    };
    i = i - 1;
    for (j = 0; j < i; j++, i--)
    {
        swap(A[i], A[j]);
    }

    cout << A;

    // char A[] = "Python";
    // char B[7];
    // int i;
    // int j;
    // for (i = 0; A[i] != '\0'; i++)
    // {
    // }
    // i = i - 1;
    // for (j = 0; i >= 0; j++, i--)
    // {
    //     B[j] = A[i];
    // }
    // B[j] = '\0';
    // cout << B;
}