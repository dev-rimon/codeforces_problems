#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sejema = 0;
    int dima = 0;
    int l = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++)
    {
        int picks;
        if (a[l] > a[r])
        {
            picks = a[l];
            l++;
        }
        else
        {
            picks = a[r];
            r--;
        }
        if (i  %2 ==0)
        {
            sejema +=picks;
        }else{
            dima +=picks;
        }
        
    }
    cout<<sejema<<" "<<dima<<endl;

    return 0;
}