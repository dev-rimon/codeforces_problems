#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hight = 0;
    int used = 0;
    for (int i = 1; ;i++)
    {
        int need = i * (i + 1) / 2;
        if (need + used <= n)
        {
            used += need;
            hight++;
        }
        else
        {
            break;
        }
    }
    cout<<hight<<endl;

    return 0;
}