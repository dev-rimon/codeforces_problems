#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            int ans = arr[0] * n;
            cout << ans << endl;
            break;
        }
    }

    return 0;
}