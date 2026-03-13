#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int s = -1;
    //onlly one element b is found 
    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            if (s == -1)
                s = a[i] + b[i];

            else
            {
                if (s != a[i] + b[i])
                {
                    cout << 0 << endl;
                    return;
                }
            }
        }
    }
    // all the element is missing 
    if (s == -1)
    {
        sort(a, a + n);
        int mx = a[n - 1] - a[0];
        cout << k - mx + 1 << endl;
        return;
    }
    //check it is range or not 
    for (int i = 0; i < n; i++)
    {
        if (a[i] > s || s - a[i] > k)
        {
            cout << 0 << endl;
            return ;
        }
    }

    cout << 1 << endl;
}

int main()
{
    int t;cin>>t;
   while(t--) solve();
   return 0;
    
} 