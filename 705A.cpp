#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  int n;
  cin >> n;
  if (n == 1)
  {
    cout << "I hate it" << endl;
  }
  else if (n == 2)
  {
    cout << "I hate that I love it" << endl;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {

      if (i % 2 == 0)
      {
        cout << "I hate ";
      }
      else
      {
        cout << "I love ";
      }

      if (i == n - 1)
      {
        cout << "it" << endl;
      }
      else
      {
        cout << "that ";
      }
    }
  }

  return 0;
}
