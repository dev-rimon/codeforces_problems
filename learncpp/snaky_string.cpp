#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] == 's' || s[3] == 's')
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}