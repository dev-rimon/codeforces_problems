#include <iostream>
using namespace std;
int main()
{
    char stetment[]{"i have a 234 cows .and i have 567 dogs"};
    cout << stetment << endl;

    size_t digitcount{};
    for (auto x : stetment)
    {
        if (isdigit(x))
        {
            cout << "the digit is :" << x << endl;
            digitcount++;
        }

    }
    cout<<"the digit count is :"<<digitcount<<endl;

    return 0;
}