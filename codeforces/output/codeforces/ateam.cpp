#include <iostream>
using namespace std;
int main()
{
    int problems;
    int arr[100000];
    int count = 0;
    int sum = 0;
    cin >> problems;
    for (int i = 0; i < problems; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sum = arr[0]+arr[1]+arr[2];

        if (sum >= 2)
        {
            count++;
        }
 
       
    }
     cout << count << endl;
    

    return 0;
}