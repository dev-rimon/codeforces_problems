#include<iostream>
#include<vector>
#include<list>
#include<cctype>
using namespace std;
int main (){
// vector<char>v(10);
// int i;
// cout<<v.size()<<endl;
// for(int i=0; i<10; i++) v[i]=i+'a';
// for (int  i = 0; i <v.size(); i++)
// {
//    cout<<v[i];
// }
list<int > a;
 list<int > ::iterator p;
for (int  i = 0; i < 10; i++)
{
   a.push_back(i);
}
for (int  i = 0; i < 10; i++)
{
   a.push_front(i);
}
p=a.begin();
while (p != a.end())
{
    cout<<*p<<endl;
    p++;
}











    return 0;
}