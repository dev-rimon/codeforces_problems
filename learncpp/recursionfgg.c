#include <stdio.h>
void ptintfcount( int n)
{
    if (n == 0)
       return;

  ptintfcount(n - 1);   // first go deeper
    printf("%d ", n);  
}
int main()
{
    int n;
    scanf("%d", &n);
   
 ptintfcount( n);

    return 0;
}
