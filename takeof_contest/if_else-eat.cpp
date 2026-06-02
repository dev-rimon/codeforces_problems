#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    if (r > 2000)
    {
        if (c == 0)
        {
            cout << " Compiler Water" << endl;
        }
        else if (c > 1000)
        {
            cout << "Quantum Pizza" << endl;
        }
        else if (c >= 1 && c <= 1000)
        {
            cout << "Neural Noodles" << endl;
        }
    }
    if (r <= 2000)
    {
        if (c == 0)
        {
            cout << " Null Soup" << endl;
        }
        else if (c > 1000)
        {
            cout << "Buggey Burger" << endl;
        }
        else if (c >= 1 && c <= 1000)
        {
            cout << "Logic Lemonade" << endl;
        }
    }

    return 0;
}