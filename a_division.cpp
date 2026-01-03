#include <iostream>
using namespace std;
int main()
{
    int t;
   long long  int a;
    cin >> t;
    for (int i = 0; i < t; i++)
    { cin>>a;
        if (a < 0)
        {
            cout << "Division 4" << endl;
        }
        if (a >= 0 && a <= 1399)
        {
            cout << "Division 4" << endl;
        }
        if (a >= 1400 && a <= 1599)
        {
            cout << "Division 3" << endl;
        }
        if (a >= 1600 && a <= 1899)
        {
            cout << "Division 2" << endl;
        }
        if (a >= 1900)
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}
