#include <iostream>
using namespace std;
#include <vector>

pair<int, int> missingAndRepeating(vector<int> &arr)
{
    int missing = -1;
    int repeating = -1;
    for (int i = 1; i <= arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            repeating = i;
        }
        else if (count == 0)
        {
            missing = i;
        }
        // if (missing != -1 && repeating != -1)
        // {
        //     break;
        // }
    }
    return {missing, repeating};
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 6};
    cout << missingAndRepeating(arr).first << " and " << missingAndRepeating(arr).second;
}