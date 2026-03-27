#include <iostream>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painte";
    int i, j;

    for (i = 0, j = 0; A[i] != 0 && B[j] != 0; i++, j++)
    {
        if (A[i] != B[j])
        {

            cout << "Not Equal";
            return 0;
        }
    }
    if (A[i] == '\0' && B[i] == '\0')
    {
        cout << "Equal";
    }
    else if (A[i] < B[j])
    {
        cout << "Smaller";
    }
    else
        cout << "greater";
}