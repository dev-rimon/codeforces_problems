#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int  i = 0; i <= t; i++)
    {
        string str;
        getline(cin, str);
        int num1, num2;
        char opr;
        stringstream ss(str);
        ss >> num1 >> opr >> num2;
        if (opr == '+')
        {
          int   result = num1 + num2;
            cout << result << endl;
         
        }
       
    }
    
       
      


    return 0;
}
