#include <iostream>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;

        int m;
        cin >> m;
        string b, c;
        cin >> b;
        cin >> c;
        for (char i = 0; i < m; i++)

        {
            if (c[i] == 'D')
            {
                a += b[i];
            }
            else if (c[i] == 'V')
            {

                a.insert(a.begin(), b[i]);
            }
        }
        cout << a << endl;
    }

    return 0;
}