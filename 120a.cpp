
#include <iostream>
#include <vector>

using namespace std;

bool search_martix(vector<vector<int>>& martix, int target)
{
    int m = martix.size();
    int n = martix[0].size();
    int left = 0, right = m * n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int row = mid / n;
        int col = mid % n;
        int value = martix[row][col];
        if (value == target)
            return true;
       else  if (value < target)
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> martix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 100;
    if (search_martix(martix, target))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}

