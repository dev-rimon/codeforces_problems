#include<stdio.h>
#include<ctype.h>
int main (){

char s[100];
scanf("%s",s);
int cout =0;
for (int  i = 0; i < 100; i++)
{
   if (isdigit(s[i]))
        {
            cout++;
        }
   
    
    
}
 if (cout>=1)
    {
       printf("invalid");
    }
    else{
        printf("valid");
    }




}