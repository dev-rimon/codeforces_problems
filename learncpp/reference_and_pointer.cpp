#include<iostream>
using namespace std;
int main (){
 int int_data {30};
  int & ref_int_data{int_data};
  int * pointer_int_data{&int_data};



  
  cout<<"int_data"<<int_data<<endl;
  cout<<"ref_int_data"<<ref_int_data<<endl;
  cout<<"ref_double_data"<<pointer_int_data<<endl;
   cout<<"ref_double_data"<<*pointer_int_data<<endl;





}

