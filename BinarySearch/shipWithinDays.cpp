#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canShip(vector<int> &w, int days, int capacity)
{
    int d = 1;
    int load = 0;
    for (int i = 0; i < w.size(); i++)
    {
        if (load + w[i] <= capacity)
        {
            load = load + w[i];
        }
        else
        {
            d++;
            load = w[i];
        }
    }
    if (d <= days)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int shipWithinDays(vector<int> &weights, int days)
{
    auto sumWeights = [&](vector<int> &weights)
    {
        int sum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            sum = sum + weights[i];
        }
        return sum;
    };
    int low = *max_element(weights.begin(), weights.end());
    int high = sumWeights(weights);
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canShip(weights, days, mid) == true)
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
    // vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> weights = {1, 2, 3, 1, 1};
    int days = 4;

    int result = shipWithinDays(weights, days);
    cout << result;
}