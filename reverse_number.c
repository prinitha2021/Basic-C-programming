#include <stdio.h>  //reverse a given integer

int main()
{
    int i,j,p,n;
    printf("\nenter a value greater than 0");
    scanf("%d",&n);
    for(p=1;p<=10;p++)
    {i=n%10;
    j=n/10;
    if(i>=0&&i+j>0)
    {printf("%d",i);
    }
    else
    {break;
    }
    n=j;
    }

    return 0;
}
