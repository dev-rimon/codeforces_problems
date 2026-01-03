#include <iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c,d;
  

    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      cin>>a>>b>>c>>d;
       if (a<b)
       {
       count++;
       }if (a<c)
       {
       count++;
       }if (a<d)
       {
       count++;
       }
       
          cout << count << endl;
          count=0;
    }
  

    return 0;
}
