#include <stdio.h>  // prime number or not

int main()
{
   int n,i,count=0;
   printf("\nenter a number to find it is a prime or not.");
   scanf("%d",&n);
   if(n<=0)
   {printf("\nenter a number greater than 0.");
   }
   else
   {if(n==1)
      {printf("\n 1 is neither prime nor composite.");
      }
      else
      {
   for(i=1;i<=n;i++)
         {if(n%i==0)
           {count++;
            }
         }
      }
   }
      
   if(count==2)
   {printf("\n%d is a prime number.",n);
   }
   else
   {printf("\n%d is not a prime number.",n);
   }
    return 0;
}
