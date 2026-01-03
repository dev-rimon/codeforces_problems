#include <iostream>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if (str == "abc")
        {
            cout << "YES" << endl;
        }

        if (str[0] == 'a' && str != "abc")
        {
            swap(str[1], str[2]);
            if (str == "abc")
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }

        int len = str.find("a");

        if (str[0] != 'a')
        {
            swap(str[0], str[len]);

            if (str == "abc")
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}