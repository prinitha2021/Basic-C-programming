#include <stdio.h>  // lcm and gcd of two numbers

int main()
{
    int i,j,p,a,b,temp;
    printf("\nenter the values of a and b to find the LCM and GCD of two numbers.");
    scanf("%d %d",&a,&b);
    if(a>b)
    {temp=a;
     a=b;
     b=temp;
    }
   for(i=1;i<=a*b;i++)
    {p=a*i;
      for(j=1;j<=a;j++)
         {if(b*j==p)
           {printf("lcm is %d",p);
            break;
           }
         }
           if(b*j==p)
           {break;
           }
    }
    
    for(i=a;i>=1;i--)
      {if(a%i==0&&b%i==0)
         {printf("\ng.c.d is %d",i);
           break;
         }
      }
 return 0;
}
