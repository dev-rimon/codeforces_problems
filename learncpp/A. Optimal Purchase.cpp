#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;
        long long ans, ans1, ans2, reming;
        ans = n * a;
        ans1 = (n / 3) * b + (b);
        reming = n % 3;
        ans2 = (n / 3) * b + reming * a;
        long long int result = std::min({ans, ans1, ans2});
        cout << result << endl;
    }

    return 0;
}