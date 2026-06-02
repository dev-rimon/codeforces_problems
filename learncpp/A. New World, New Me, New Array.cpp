#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    int ans = 0;

    if (k == 0)
    {
        cout << 0 << endl;
    }
    else if (k > n * p || k < -n * p)
    {
        cout << -1 << endl;
    }
    else
    {

         ans = (abs(k) + p - 1) / p;
        cout << ans << endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    

    return 0;
}