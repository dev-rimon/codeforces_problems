#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a;
        cin >> n >> a;
        int l = 0;
        int r = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (a > arr[i])
            {
                l++;
            }
            else if (a<arr[i])
            {
                r++;
            }
        }
        cout << (l > r ? a - 1 : a + 1) << endl;
    }

    return 0;
}