#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string result ="";
    for (int i = n - 1; i >= 0; i--)
    {
        int pos;
        int len = result.size();
        if (len % 2 == 0)
        {
            pos = len / 2;
        }
        else
        {
            pos = len / 2 + 1;
        }
        
        result.insert(result.begin() + pos, s[i]);
      
    }
    reverse(result.begin(),result.end());
  cout << result << endl;
    return 0;
}