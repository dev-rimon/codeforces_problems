#include <iostream>
using namespace std;
//EXTENDED EUCLIED ALGROTHMOM
// gcd (a,b)= gcd(b, a%b);
// a%b= 

// bx1​+(amodb)y1​=gcd 
// amodb=a−⌊ba​⌋b
// bx1​+(a−⌊a/b⌋b)y1​=gcd
//  ay1+b( x1-(a/b)y1))=gcd



int extendedgcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedgcd(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}

int main()
{

    int a = 30, b = 46;

    int x, y;

    int gcd = extendedgcd(a, b, &x, &y);

    cout << "GCD = " << gcd << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}