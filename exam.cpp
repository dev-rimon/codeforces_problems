#include <iostream>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    if (n * 2 == k)
    {
        cout << n << endl;
    }
    else if (k < 3 * n)
    {
        int ans = 3 * n - k;
        cout << ans << endl;
    }
    else if (3 * n <= k)
    {
        cout << 0 << endl;
    }

    return 0;
}