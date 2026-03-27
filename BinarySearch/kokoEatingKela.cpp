#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int totalHours(vector<int> &piles, int mid)
{
    int actualHours = 0;
    for (int x : piles)
    {
        actualHours = actualHours + x / mid;
        if (x % mid != 0)
        {
            actualHours++;
        }
    }
    return actualHours;
};
int minSpeed(vector<int> &piles, int targetHours)
{
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalhour = totalHours(piles, mid);
        if (totalhour <= targetHours)
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

int main()
{
    vector<int> piles = {3, 4, 7, 11};
    int ghanta = 6;
    int result = minSpeed(piles, ghanta);
    cout << result;
}