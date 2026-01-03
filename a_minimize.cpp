#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = a + 1;
        int ans = (c - a) + (b - c);
        cout << ans << endl;
    }

    return 0;
}