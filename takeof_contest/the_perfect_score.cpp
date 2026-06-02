#include <iostream>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int sum = a + b;

    if ((a >= 24 && b >= 16) && sum >= 70)
    {
        cout << "Perfect Score" << endl;
    }
    else if (a >= 24 && b >= 16)
    {
        cout << "Passed" << endl;
    }
    else
        cout << "Failed" << endl;

    return 0;
}