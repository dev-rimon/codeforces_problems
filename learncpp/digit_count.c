#include <stdio.h>
int main()
{
    //fsljfahjh
  long long  int n;

   long long  int count = 0;
    scanf("%lld", &n);
   
    while (n > 0)
    {

        n /= 10;
        count++;
    }
    printf("%lld\n", count);

    return 0;
}