#include<iostream>
#include <iomanip> 
using namespace std;
int main (){
    int n;
    cin>>n;
  
    double avg =0.0;
    double sum =0.0;
    for (int  i = 0; i < n; i++)
    {int p;
        cin>>p;
        sum +=p;
       
    }
     avg = sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;


    return 0;
}