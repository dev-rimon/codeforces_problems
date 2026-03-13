#include <iostream>
#include<vector>
using namespace std;
//dp probelm count strais 
int count_waysrec(int n, vector<int> &dp)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = count_waysrec(n - 1, dp) + count_waysrec(n - 2, dp);
}
int count_ways(int n)
{
    vector<int> dp(n + 1, -1);
    return count_waysrec(n, dp);
}

int main()
{
    int n=4;
    cout<<count_ways(n)<<endl;

    return 0;
}