#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int result = 60* h + m;
        int ans = 1440 - result;
        cout << ans << endl;
    }

    return 0;
}