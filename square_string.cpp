#include <iostream>
using namespace std;

bool is_plardome(const string &s)
{
   int i = 0, j = (int)s.size() - 1;
   while (i < j)
   {
      if (tolower(s[i]) != tolower(s[j]))
         return false;

      i++;
      j--;
   }
   return true;
}

int main()
{
   string s;
   getline(cin, s);
   cout << "the value is " << (is_plardome(s) ? "YES" : "NO");

   return 0;
}
