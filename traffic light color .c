#include <stdio.h>
int main() 
{
   char a;
   printf("enter trafic signal light colour :");
   scanf("%c",&a);
   if(a=='R'||a=='r')
   {
       printf(" signal:Stop(Red)");
   }
  else if(a=='Y'||a=='y')
   {
       printf("signal:prepare to stop / proceed with caution(Yellow)");
   }
  else if(a=='G'||a=='g')
   {
       printf("signal:proceed(Green)");
   }
   else 
   printf("wrong choice");

    return 0;
}
