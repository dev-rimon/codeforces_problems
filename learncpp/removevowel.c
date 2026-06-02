#include<stdio.h>
int main (){

char str [100];
scanf("%s",str);
int i =0;
while (str[i]!='\0')
{
   if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
   {
    str[i]='*';
   }
   i++;
   
}

printf("%s",str);


    return 0;
}