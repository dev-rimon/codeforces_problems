#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c;
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
     a = arr[3]-arr[0];
      b = arr[3]-arr[1];
       c = arr[3]-arr[2];
       cout<<c<<" "<<b<<" "<<a
       <<endl;
    
    return 0;
}