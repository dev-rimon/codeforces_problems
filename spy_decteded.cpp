#include <iostream>
#include <vector>

using namespace std;
//find the unique element index 
// 1 2 2 2 
//ans 1
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int uniqueValue;

    // Determine the unique value
    if (a[0] == a[1])
    {
        // majority is a[0]
        for (int i = 2; i < n; i++)
        {
            if (a[i] != a[0])
            {
                uniqueValue = a[i];
                break;
            }
        }
    }
    else
    {
        // either a[0] or a[1] is unique
        uniqueValue = (a[0] == a[2]) ? a[1] : a[0];
    }

    // Find index of unique value
    for (int i = 0; i < n; i++)
    {
        if (a[i] == uniqueValue)
        {
            cout << i + 1 << endl; // 1-based index
            break;
        }
    }
    }
    
    

    return 0;
}
