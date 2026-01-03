#include<iostream>
#include<vector>
using namespace std
;
int main (){
vector< long long >v(4);
for (int  i = 0; i <v.size(); i++)
{
    cin>>v[i];
}

int count =0;
for ( long long int  i = 0; i < v.size(); i++)
{
    for ( long long int  j = i+1; j < v.size(); j++)
    {
        if(v[i] ==v[j]){
            count++;
        }

    }

}
  cout<<count<<endl;



    return 0;
}