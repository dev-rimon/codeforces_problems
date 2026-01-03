#include<iostream>
#include<string>
using namespace std;
int main (){
    string myString;
    cin>>myString;
    int count=0;
    
 for (int i = 0; i < myString.length(); ++i) { 
       count++;
    } 
    if (count>5)
    {
       cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    

    return 0;
}