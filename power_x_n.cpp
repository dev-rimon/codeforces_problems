
#include <iostream>
using namespace std;

int main()
{
    double x;
    int n;
    cin >> x >> n;
    long binForm = n;
    double ans = 1;
    while (binForm > 0)
    {

        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    std::cout << ans << std::endl;
    return 0;
}