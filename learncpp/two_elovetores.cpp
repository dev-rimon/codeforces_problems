#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(a - 1);
  
        int third = abs(c-b)+abs(c-1);
        if (first < third)
        {
            cout << 1 << endl;
        }
        else if (third < first)
        {
            cout << 2 << endl;
        }
        else
            cout << 3 << endl;
    }

    return 0;
}