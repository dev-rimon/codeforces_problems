
#include <iostream>
#include <vector>
#include <algorithm>
//duch national flag sort
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0; i<n; i++){
       
       cin>>v[i];
   }
  int low =0, high =n-1, mid =0;
  while (mid<=high)
  {
    if (v[mid ]==0)
    {
      swap(v[low], v[mid]);
      low++;
      mid++;
    }
    else if (v[mid] == 1)
    {
      mid++;
    }
    else
    {
      swap(v[mid], v[high]);
      high--;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  
  

    return 0;
}