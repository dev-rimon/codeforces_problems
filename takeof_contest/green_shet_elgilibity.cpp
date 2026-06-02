#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(8);
    bool found = false;
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];

        if (a[i] < 60)
        {
            cout << "Not Eligible" << endl;
            return 0;
        }
    }

    cout << "Eligible" << endl;
    return 0;
}