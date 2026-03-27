#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPosibble(vector<int> &array, int day, int m, int k)
{
    int count = 0;
    int bouqetNo = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] <= day)
        {
            count++;
        }
        else
        {
            bouqetNo += count / k;
            count = 0;
        }
    }
    bouqetNo += count / k;

    if (bouqetNo >= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int minBouquet(vector<int> &array, int m, int k)
{
    if (1LL * m * k > array.size())
    {
        return false;
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int ans = -1;
    for (int i = 0; i < array.size(); i++)
    {
        maxi = max(array[i], maxi);
        mini = min(array[i], mini);
    }
    int low = mini;
    int high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPosibble(array, mid, m, k) == true)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
// int minBouquet(vector<int> &array, int m, int k)
// {
//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     for (int i = 0; i < array.size(); i++)
//     {
//         mini = min(mini, array[i]);
//         maxi = max(maxi, array[i]);
//     }
//     if (m * k > array.size())
//         return -1;

//     for (int i = mini; i <= maxi; i++)
//     {
//         if (isPosibble(array, i, m, k) == true)
//     {
//         return i;
//     }
// }
// return -1;
// }
int main()
{
    vector<int> array = {7, 7, 7, 7, 6, 5, 8, 9};

    int result = minBouquet(array, 2, 3);
    cout << result;
}