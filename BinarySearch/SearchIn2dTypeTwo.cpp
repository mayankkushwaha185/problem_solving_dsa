#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> mat = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    int n = mat.size();    // row
    int m = mat[0].size(); // col
    cout << mat[0][n - 1];
}