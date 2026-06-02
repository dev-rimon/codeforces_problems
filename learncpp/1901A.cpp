#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int pev = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ans = max(ans, (a - pev));
            pev = a;
        }
        ans = max(ans, 2 * (x - pev));
        cout << ans << endl;

    }}
    