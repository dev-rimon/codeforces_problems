#include <iostream>
//wrong code for codeforces problems
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;

    if (b >= a * 2 && c >= a * 4)
    {
        sum = a + (a * 2) + (a * 4);
    }

    else if (b >= (a - 1) * 2 && c >= (a - 1) * 4)
    {
        sum = (a - 1) + (a - 1) * 2 + (a - 1) * 4;
    }

    else if (a == b && b == c)
    {
        a = c / 4;
        b = c / 2;
        sum = a + b + c;
    }
    else
    {
        cout << 0 << endl;
        return 0;
    }

    cout << sum << endl;

    return 0;
}
