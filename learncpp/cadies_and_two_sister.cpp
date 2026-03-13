#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 2)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0)
        {
            int ans = (n / 2) - 1;
            cout << ans << endl;
        }
        else
        {
            int value = n - 1;
            int res = n / 2;
            cout << res << endl;
        }
    }

    return 0;

    return 0;
}