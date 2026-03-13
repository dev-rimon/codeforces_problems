#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxcut_helper(int n, int x, int y, int z, vector<int> &memo)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }

    int cut1 = maxcut_helper(n - x, x, y, z, memo);
    int cut2 = maxcut_helper(n - y, x, y, z, memo);
    int cut3 = maxcut_helper(n - z, x, y, z, memo);

    int maxcut = max(cut1, max(cut2, cut3));
    if (maxcut == -1)
    {
        return memo[n] = -1;
    }

    return memo[n] = maxcut + 1;
}
int maxumize_the_cut(int n, int x, int y, int z)
{
    vector<int> memo(n + 1, -1);
    int res = maxcut_helper(n, x, y, z, memo);
    if (res == -1)
    {
        return 0;
    }
    return res;
}
int main()
{
    int n = 11;
    int x = 2, y = 3, z = 5;

    cout << maxumize_the_cut(n, x, y, z) << endl;

    return 0;
}
