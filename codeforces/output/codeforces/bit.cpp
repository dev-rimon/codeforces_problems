#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    string opreatons;
    int x=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>opreatons;
       if (opreatons=="++X")
       {
        ++x;
       }
       if (opreatons=="--X")
       {
       --x;
       }if (opreatons=="X++")
       {
        x++;
       }if (opreatons=="X--")
       {
        x--;
       }
       
       
     
       
    }
    cout<<x<<endl;


    return 0;
}