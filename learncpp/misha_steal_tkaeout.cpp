#include <iostream>
#include<vector>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int countzeros = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                countzeros++;
            }
            sum += arr[i];
        }
        int ans = 0;
        if (countzeros > 0)
        {
            ans = (sum / 3) + countzeros;
            cout << ans << endl;
        }
        else
        {
            cout << sum / 3 << endl;
        }
    }

    return 0;
}