#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = n / 4;
        int ans2 = n - (ans * 4);
        int ans3 = ans2 / 2;
        int final = ans + ans3;

        cout << final << endl;
    }

    return 0;
}