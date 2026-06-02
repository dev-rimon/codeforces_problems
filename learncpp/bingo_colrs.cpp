#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve()
{
    int n;
    if (!(cin >> n))
        return;

    map<int, int> freq;
    int max_freq = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int color;
            cin >> color;
            freq[color]++;
            max_freq = max(max_freq, freq[color]);
        }
    }

    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (max_freq <= (n * n - n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        solve();
    }
    return 0;
}