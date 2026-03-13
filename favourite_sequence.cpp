#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0;
    int r = n - 1;
    vector<int> ans;
    while (l <= r)
    {
        if (l != r)
        {
            ans.push_back(arr[l]);
            ans.push_back(arr[r]);
        }
        else
        {
            ans.push_back(arr[r]);
        }

        l++;
        r--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}