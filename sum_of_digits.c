#include <stdio.h>     // sum of digits in a Integer

int main()
{
    int i,j,num,sum=0,x;
    printf("\nenter a number.");
    scanf("%d",&num);
    for(x=1;x<=15;x++)
    {i=num%10;
     j=num/10;
     if(i>=0&&i+j>0)
     {sum=sum+i;
     }
     else{
         break;
     }
     num=j;
    }
    printf("\nsum of digits in the given integer is %d",sum);
    
     
    return 0;
}
