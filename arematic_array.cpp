#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      sum += x;
    }
    if (sum < n)
      cout << "1\n";
    else
      cout << sum - n << "\n";
  }

  return 0;
}