#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, y;
        cin >> x >> n >> y;
        int ans = n * y;
        int final = x - ans;
        if (final < 0)
        {

            cout << 0 << endl;
            continue;
        }
        cout << final << endl;
    }

    return 0;
}