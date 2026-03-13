#include <iostream>
#include <vector>
#define int long long
using namespace std;
vector<int> dp(10000001, -1);
int coin_change(vector<int> &coins, int n, int sum)
{
    if (sum == 0)
    {
        return 0;
    }
    if (sum < 0)    
    {
        return INT_MAX;
    }
    int result = INT_MAX;
    if (dp[sum] != -1)
    {
        return dp[sum];
    }

    for (int i = 0; i < n; i++)
    {
        result = min(result, 1 + coin_change(coins, n, sum - coins[i]));
    }
    dp[sum] = result;
    return result;
}
signed main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> coins = {1, 5, 7};
    int result = coin_change(coins, n, sum);
    if (result == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}