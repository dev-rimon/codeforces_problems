#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        double diff = abs(a - b);
        double moves = ceil(diff / (2 * c));
        cout << (long long)moves << endl;
    }

    return 0;
}