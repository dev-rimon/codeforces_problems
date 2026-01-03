#include <iostream>
using namespace std;
int main()
{
   long long int n;
   cin >> n;
   int ans = 0;
   int count = 0;

   while (n > 0)
   {
      ans = n % 10;
      if (ans == 4 || ans == 7)
      {
         count++;
      }
      n = n / 10;
   }
   if (count == 4 || count == 7)
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }

   return 0;
}