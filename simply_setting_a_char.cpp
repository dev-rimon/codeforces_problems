#include <iostream>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x <= i)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}