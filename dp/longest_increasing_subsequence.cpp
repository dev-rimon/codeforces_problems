#include <iostream>
#include <vector>
using namespace std;

int lisfind_at_index(vector<int> &arr, int idx, vector<int> &memo)
{
    // base case
    if (idx == 0)
    {
        return 1;
    }
    // check if the value is store
    if (memo[idx] != -1)

        return memo[idx];
    int mx = 1;
    for (int pev = 0; pev < idx; pev++)
    {
        if (arr[pev] < arr[idx])
        {
            mx = max(mx, lisfind_at_index(arr, pev, memo) + 1);
        }
    }
    memo[idx] = mx;
    return memo[idx];
}
int lis(vector<int> &arr)
{
    int n = arr.size();
    vector<int> memo(n, -1);
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = max(res, lisfind_at_index(arr, i, memo));
    }
    return res;
}

int main()
{
    vector<int> arr = {10, 22, 3,6, 41, 60};
    cout << lis(arr)<<endl;

    return 0;
}