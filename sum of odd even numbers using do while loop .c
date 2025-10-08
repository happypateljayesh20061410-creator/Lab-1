#include <stdio.h>
int main() 
{
    int i=1,n,se=0,so=0;
    printf("enter your value:");
    scanf("%d",&n);
  do
   {
      if(i%2==0)
      {
          se=se+i;
      }
      else
      {
          so=so+i;
      }
       i++;
   }
   while(i<n);
   printf("SUM of even=%d\n",se);
   printf("SUM of odd=%d",so);

    return 0;
}
