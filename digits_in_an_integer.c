#include <stdio.h>  //count total number of digits in an integer

int main()
{
     int i,j,num,count=0,x;
     printf("\nenter a number.");
     scanf("%d",&num);
     for(x=1;x<=15;x++)
     {i=num%10;
     j=num/10;
     if(i>=0&&i+j>0)
       {count++;
       }
       else
       {break;
       }
       num=j;
     }
     printf("\nthe number of digits in the given number is %d",count);
     
     
     
    return 0;
}
