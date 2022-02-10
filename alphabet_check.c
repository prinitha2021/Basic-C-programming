#include <stdio.h>

int main()
{
   char alp;
   printf("enter an character:\n");
   scanf("%c",&alp);
   if(alp>=65&&alp<=90)
   {printf("it is an alphabet");
   printf("%c",alp);
   }
   else {
       if(alp>='a'&&alp<='z')
       {printf("\nit is an alphabet:");
       }
       else
       {printf("\n it is not an alphabet:");
       }
   }
   
    return 0;
}
