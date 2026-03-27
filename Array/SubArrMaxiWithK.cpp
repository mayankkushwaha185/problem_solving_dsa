#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int sum = 0;
            int len = -1;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                if (sum == k)
                {
                    len = max(len, j - i + 1);
                }
            }
        }
    }
    return 0;
}
