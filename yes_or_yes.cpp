#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string name;
        cin>>name;
        string lowerName = name;
        for(char &c : lowerName) {
            c = tolower(c);
        }
        
        if (lowerName == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
      
    }

    return 0;
}