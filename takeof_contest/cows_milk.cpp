#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 10)
        cout << "Infected" << endl;
    else if (n > 10 && n < 20)
        cout << "Need Checkup" << endl;
    else
        cout << "Healthy" << endl;

    return 0;
}
