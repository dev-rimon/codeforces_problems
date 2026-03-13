#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int number_100 = n / 100;

    n = n % 100;
    int number_20 = n / 20;

    n = n % 20;
    int number_10 = n / 10;

    n = n % 10;
    int number_5 = n / 5;

    n = n % 5;
    int number_1 = n ;
    int ans = number_100+number_20+number_10+number_5+number_1;
    cout<<ans<<endl;

  

    return 0;
}