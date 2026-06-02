#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve()
{
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    long long all = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        all += (a[i] / x);
        // how many times will be tansfer 
    }
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
       long long current_total = a[i] + (all - (a[i] / x)) * y;
      // i-তম ব্যাংককে destination ধরলে:
        // বাকি ব্যাংকগুলোর মোট ট্রান্সফার সংখ্যা = (s_all - a[i]/x)
        // প্রতিটি ট্রান্সফারে আসবে y টাকা।
        if (current_total > max)
        {
            max = current_total;
        }
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}