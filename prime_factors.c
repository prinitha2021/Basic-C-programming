#include <stdio.h> // prime factors for the given number.

int main()
{
   int n,i,j,count=0;
   scanf("%d",&n);printf("\n the prime factors of %d are:",n);
   for(i=2;i<=n;i++)
     {if(n%i==0)
        {
            for(j=1;j<=i;j++)
             {if(i%j==0)
                {count++;
                }
             }
             if(count==2)
             {printf(" %d",i);
               count=0;
             }
        }
        
     }

    return 0;
}
