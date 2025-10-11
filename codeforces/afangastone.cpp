#include<iostream>
#include <cmath>
using namespace std;
int main (){
   long long  int n,m,a;
    cin>>n>>m>>a;
   
  long long   int first = ceil(n+a-1)/a;
  long long   int second =ceil(m+a-1)/a;
  long long  int result = first*second;
    cout<<result<<endl;



    return 0;
}