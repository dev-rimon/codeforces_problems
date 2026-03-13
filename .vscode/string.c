#include<stdio.h>
int main (){
    char arr[5];
    for (int  i = 0; i < 5; i++)
    {
       scanf(" %c", &arr[i]);
      
    }
    for (int  i = 0; i < 5; i++)
    {
        if (arr[i]=='a' ||arr[i]=='e'||arr[i]=='i' ||arr[i]=='o'||arr[i]=='u')
       {
      printf("vowel\n");
       }
       else{
        printf("consonaent\n");
       }
    }
    
    







}