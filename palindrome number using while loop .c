#include <stdio.h>
int main() 
{
    int i,reversed=0,remainder,orignal;
    printf("enter your value:");
    scanf("%d",&i);
    orignal=i;
  while(i!=0)
   {
 remainder=i%10;
 reversed=reversed*10+remainder;
  i/=10;
   }
   if(orignal==reversed)
   {
       printf("palindrom number");
   }
   else
   {
       printf("invaild");
   }
    return 0;
}
