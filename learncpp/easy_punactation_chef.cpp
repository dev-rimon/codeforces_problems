#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void solve (){
      int n;
    cin >> n;
    string s;
    cin >> s;
    int conscount = 0;
    bool found = false;
    for (char c : s)
    {
        if (isalpha(c) && !isVowel(c))
        {
            conscount++;
            if (conscount >= 4)
            {
                found = true;
                break;
            }
        }
        else
        {
            conscount = 0;
        }
    }

    if (found)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;


}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      solve();
    }
    
    

  
    return 0;
}