#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum1 = (1 << n);
    int sum2 = 0;

    for (int i = 1; i < n / 2; i++)
    {
        sum1 += (1 << i);
    }
    for (int i = n / 2; i < n; i++)
    {
        sum2 += (1 << i);
    }
    cout << sum1 - sum2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}