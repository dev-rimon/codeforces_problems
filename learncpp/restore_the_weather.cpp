#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> a(n);
        vector<int> b(n);

        // input a + index
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        // input b
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // sort both
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<int> ans(n);

        // assign
        for (int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }

        // output
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}