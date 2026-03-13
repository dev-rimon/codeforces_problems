#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        if (y > n)
        {
            cout << 0 << '\n';
        }
        else
        {
            int k = y + ((n - y) / x) * x;
            cout << k << '\n';
        }
    }
    return 0;
}
