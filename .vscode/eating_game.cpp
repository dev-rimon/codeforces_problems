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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;
        int mx = 0;
        int ans = 0;
        for (auto i : arr)
            mx = max(i, mx);
        for (auto &r : arr)
            ans += r == mx;
        cout << ans << endl;
    }

    return 0;
}