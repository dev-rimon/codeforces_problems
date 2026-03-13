#include<iostream>
using namespace std;
int main (){

   long long  int n,m;
    cin>>n>>m;
   long long  int last_digit = n %10;
   long long  int last_digit1 = m%10;
    long long int sum = last_digit1+last_digit;
    cout<<sum<<endl;



    return 0;
}