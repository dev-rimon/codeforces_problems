#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Aij ekta birat fadafadi hoibo" << endl;
    }
    else if (n > 0 && n < 50)
    {
        cout << "Free" << endl;
    }
    else if (n >= 50)
    {
        cout << "Ekdaam Passho" << endl;
    }

    return 0;
}