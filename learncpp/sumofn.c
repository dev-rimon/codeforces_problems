#include<stdio.h>
int sumofn(int n){
    if (n==0)
    {
       return 0;
    }
    return n+sumofn(n-1);
    
}



int main (){
int n;
scanf("%d",&n);
int ans = sumofn(n);
printf("%d",ans);




    return 0;
}