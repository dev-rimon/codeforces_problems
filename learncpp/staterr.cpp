#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (z <= 50)
    {
        cout << x << endl;
    }
    else if (z > 50)
    {
        int extra = z - 50;
        int ans = (extra * y) + x;
        cout << ans << endl;
    }
}
