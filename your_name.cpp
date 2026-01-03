#include<iostream>
#include <algorithm>
#include<string>
#include<utility>
using namespace std;
 int main (){
int tests;
    cin>>tests;
    int size;
    string s ,t;
    for (int  i = 0; i < tests; i++)
    {
        cin>>size;
        cin>>s>>t;
    
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

       if (s==t)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
 
    }
    return 0;
 }