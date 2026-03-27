#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void nextPermute(vector<int> &arr)
{
    int n = arr.size();
    int pivot = -1;

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            pivot = i - 1;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for (int j = n - 1; j > pivot; j--)
    {
        if (arr[j] > arr[pivot])
        {
            swap(arr[j], arr[pivot]);
            break;
        }
    }
    reverse(arr.begin() + pivot + 1, arr.end());
}

int main()
{
    vector<int> arr = {4, 1, 3, 4, 5};
    nextPermute(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}