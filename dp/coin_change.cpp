#include <iostream>
#include<vector>
using namespace std;

//Driver Code Ends
int countRecur(vector<int>& coins, int n, int sum) {
  
    // If sum is 0 then there is 1 solution
    if (sum == 0) return 1;

    if (sum < 0 || n == 0) return 0;

    // count is sum of solutions
    // (i)including coins[n-1] (ii) excluding coins[n-1]
    return countRecur(coins, n, sum - coins[n - 1]) + 
            countRecur(coins, n - 1, sum);
}

int count(vector<int> &coins, int sum) {
    return countRecur(coins, coins.size(), sum);
}
//Driver Code Starts

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    cout << count(coins, sum);
    return 0;
}

//Driver Code Ends