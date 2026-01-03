#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    int maximun, length;
    vector<int>favoruite(100000);
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> maximun >> length;
        favoruite.push_back(i);
    }
}