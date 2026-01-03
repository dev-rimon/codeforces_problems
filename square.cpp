#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}
