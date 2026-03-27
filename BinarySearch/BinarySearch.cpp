#include <iostream>
using namespace std;
#include <vector>
// int binarySerach(vector<int> &arr, int target)
// {
//     int left = 0;
//     int right = arr.size() - 1;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

int binarySearch(vector<int> &arr, int target, int low, int high)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, target, mid + 1, high);
    }
    else
    {
        return binarySearch(arr, target, low, mid - 1);
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8};
    int target = 5;
    int low = 0;
    int high = arr.size() - 1;

    int indx = binarySearch(arr, target, low, high);
    cout << indx;
}