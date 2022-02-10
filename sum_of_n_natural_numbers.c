#include <stdio.h>   // sum of first n natural numbers
#include <math.h>

int main()
{
   int n,sum=0;
   printf("\nenter n.");
   scanf("%d",&n);
   sum=n*(n+1);printf("%d",sum);
   sum=sum/2;
   printf("\nsum of first %d natural numbers is %d",n,sum);
    return 0;
}
