#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
   int years;
   cin >> years;
   while (true)
   {
      years++;
      string s = to_string(years);
      set<char> st(s.begin(), s.end());
      if (s.size() == st.size())
      {
         cout << years << endl;
         break;
      }
   }

   return 0;
}
