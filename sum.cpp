#include<iostream>
using namespace std;
int main (){
int t;
int sum=0;
int ans =0;
cin>>t;
while (t--)
{
   int a;
   cin>>a;
    ans = a%10;
 a = a/10;

    sum =ans+a;
 cout<<sum<<endl;
   
}




    return 0;
}