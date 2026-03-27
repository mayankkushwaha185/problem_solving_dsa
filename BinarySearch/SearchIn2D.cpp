#include <iostream>
#include <vector>

using namespace std;

pair<int, int> SearchInTwoD(vector<vector<int>> &mat, int target)
{
    int m = mat.size();
    int n = mat[0].size();
    pair<int, int> ans = {-1, -1};
    int low = 0;
    int high = n * m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mat[mid / n][mid % n] < target)
        {
            low = mid + 1;
        }
        else if (mat[mid / n][mid % n] > target)
        {
            high = mid - 1;
        }
        else
        {
            return {mid / n, mid % n};
        }
    }
    return ans;
}
// bool SearchInTwoD(vector<vector<int>> &mat, int target)
// {
// int m = mat.size();
//     int m = mat.size();
//     int n = mat[0].size();

//     int i = 0;
//     int j = n - 1;
// while (i < n && j < m)
//     while (i < m && j >= 0)

//     {
//         if (mat[i][j] < target)
//         {
//             i++;
//         }
//         else if (mat[i][j] > target)
//         {
//             j--;
//         }
//         else
//         {
//             return true;
//         }
//     }
//     return false;
// }

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int target = 11;
    pair<int, int> result = SearchInTwoD(mat, target);
    cout << result;
}