#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int middle = s.size() / 2;
        string first = s.substr(0, middle);
        string last = s.substr(middle);

        if (first == last)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
