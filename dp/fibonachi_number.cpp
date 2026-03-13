#include <iostream>
#include <vector>
using namespace std;

int fibnum(int n, vector<int> &memo)
{
    if (n <= 1)
    {
        return n;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = fibnum(n - 1, memo) + fibnum(n - 2, memo);
    return memo[n];
}

int fib(int n)
{
    vector<int> memo(n + 1, -1);
    return fibnum(n, memo);
}

int main()
{
    int n = 15;
    cout << fib(n) << endl;

    return 0;
}