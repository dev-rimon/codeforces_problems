#include <iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a<b)
        {
           swap(a,b);
        }
        
        ll x = 0;
        ll y = 0;
        ll cur = 1;
        ll ans = 0;
        while (true)
        {
            ll new_x = cur + y;
            ll new_y = x;
            if (new_x <= a && new_y <= b)
            {
                ans++;
                x = new_x;
                y = new_y;
                cur *= 2;
            }
            else
            {
                break;
            }
          
        }
          cout << ans << endl;
    }

    return 0;
}