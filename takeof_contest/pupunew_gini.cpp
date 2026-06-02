#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 7)
    {
        cout << "Uganda Wins!" << endl;
    }
    else if (n == 7)
    {
        cout << "Super Over Decides!" << endl;
    }
    else
        cout << "Papua New Guinea Wins!" << endl;

    return 0;
}