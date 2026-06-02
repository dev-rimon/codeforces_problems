#include <iostream>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    if (x < a && x < b)
    {
        cout << "batash khabo!" << endl;
    }
    else if (x < a && x >= b)
    {
        int cokes = x / b;
        cout << cokes << " coke khabo!" << endl;
    }
    else // x >= a
    {
        int pizza = x / a;
        cout << pizza << " pizza khabo!" << endl;

        int remaining = x % a;
        int coke = remaining / b;

        if (coke > 0)
        {
            cout << coke << " coke khabo!" << endl;
        }
    }

    return 0;
}