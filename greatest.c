#include <stdio.h>

int main()
{
   int a,b,c;
   printf("\nenter the values of a,b and c:");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
   {printf("\n %d is greater.",a);
   }
   else if(b>a&&b>c)
   {printf("\n %d is greater.",b);
   }
   else if(c>a&&c>b)
       {printf("\n %d is greater.",c);
       
   }
   else
   {printf("\nyou have written a programme to find greatest among three numbers.\nso please enter three distinct numbers..");
   }

    return 0;
}
