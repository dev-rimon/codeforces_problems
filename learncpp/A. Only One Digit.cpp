#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    while (t--)
    {
        int a;
        cin >> a;

        int minDigit = 9; // highest possible digit

        while (a > 0)
        {
            int lastdigit = a % 10;
            minDigit = min(minDigit, lastdigit);
            a /= 10;
        }

        cout << minDigit << endl;
    }

    return 0;
}