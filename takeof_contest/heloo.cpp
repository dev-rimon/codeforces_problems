#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    long long M, X, Y, Z;
    cin >> M >> X >> Y >> Z;

    long long total = 0;

    while (N--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

       
        if (a + b <= c || a + c <= b || b + c <= a)
        {
            total += M;
            continue;
        }

        long long sides[3] = {a, b, c};
        sort(sides, sides + 3);

        long long x = sides[0];
        long long y = sides[1];
        long long z = sides[2];

        long long left = x * x + y * y;
        long long right = z * z;

        if (left == right)
            total += X; 
        else if (left < right)
            total += Y; 
        else
            total += Z; 
    }

    cout << total << endl;

    return 0;
}