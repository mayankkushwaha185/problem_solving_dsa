#include <iostream>
using namespace std;

int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

int main()
{
    int d = 2;
    int temp[2];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < 12; i++)
    {
        arr[i - d] = arr[i];
    }
    // arr[0]=temp;

    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " value of i: " << i << endl;
    }
}