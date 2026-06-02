#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        vector<char> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] != 'R')|| (a[i]!='R' && b[i]=='R'))
            {
                found = true;
            }
        }
        if (found)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}