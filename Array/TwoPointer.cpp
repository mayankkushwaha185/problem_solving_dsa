#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    int j = 4;
    // for (int i = 0, j = 4; i <= j; i++)
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k = 0; k <= 4; k++)
    {
        cout << arr[k];
    }
    //     int i;
    //     int j = 1;
    //     int arr[6] = {1, 1, 2, 2, 3, 3};

    //     for (i = 0; j < 6; j++)
    //     {
    //         if (arr[j] != arr[i])
    //         {
    //             i++;
    //             arr[i] = arr[j];
    //         }
    //     }

    // int arr[5] = {1, 2, 3, 4, 5};
    // int target = 8;
    // Target sum
    // for (int i = 0; i <= j;)
    // {
    //     if (arr[i] + arr[j] == target)
    //     {
    //         cout << "Found at indices: " << i << " and " << j << endl;
    //         return 0;
    //     }
    //     else if (arr[i] + arr[j] < target)
    //     {
    //         i++;
    //             }
    //     else
    //     {
    //         j--;
    //     }
    // }
    // cout << "No pair found";

    // traversing of i<=j value
    // for (int i = 0; i <= j; i++)
    // {
    //     if (i == j)
    //     {
    //         cout << "i and j become equal" << " i value is: " << i << "j valueis: " << j << endl;
    //     }
    //     cout << "i moving: " << arr[i] << endl;
    //     cout << "j moving: " << arr[j] << endl;
    //     j--;
    // }
}