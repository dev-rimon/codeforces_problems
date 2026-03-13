#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int alice = a1 + a2 + a3 - min(a1, min(a2, a3));
        int bob = b1 + b2 + b3 - min(b1, min(b2, b3));
        if (alice == bob)
        {
            cout << "Tie" << endl;
        }
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice)
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}