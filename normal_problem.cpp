#include <iostream>

#include <string>
using namespace std;


int main()
{

    int  t;
    cin >> t;
    while (t--)
    {

        string a;
        cin >> a;
        string b = " ";
        for (int i = a.length() - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                b.append("q");
            }
            else if (a[i] == 'q')
            {
                b.append("p");
            }
            else if (a[i] == 'w')
            {
                b.append("w");
            }
        }
        cout << b << endl;
    }

    return 0;
}
