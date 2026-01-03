#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int a, b;
   cin>>n;
  while (n--)
  {
   cin>>a>>b;
   int count = 0;
   while (a % b != 0) 
   {
       a++;
       count++;
   }
   cout << count << endl;
  }
  
    }


