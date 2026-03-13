#pragma GCC optimize("Ofast")
#include <iostream>
using namespace std;
using ll = long long;
#define int long long

void Solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());
    ll ekadhare = 1;
    for (int i = 0; i < n; i++)
    {
        ll tmp = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[j - 1] == arr[j])
                continue;
            else if (arr[j - 1] + 1 == arr[j])
                tmp++;
            else
            {
                i = j - 1;
                break;
            }
        ekadhare = max(ekadhare, tmp);
    }
    cout << ekadhare << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)