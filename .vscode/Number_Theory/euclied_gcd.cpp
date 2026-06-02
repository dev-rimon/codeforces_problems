#include <iostream>
using namespace std;

// Euclid algrothom gcd(a,b)= gcd (b, a%b)
//  gcd(10,40)= (40, 10)
//  gcd(10 0)
//  gcd =10

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << ans << endl;

    return 0;
}