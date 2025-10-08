#include <stdio.h>
int main() 
{
    int i=1,n,sum=0;
    printf("enter your value:");
    scanf("%d",&n);
  do
   {
       sum=sum+i;
       i++;
   }
   while(i<=n);
   printf("SUM=%d",sum);
    return 0;
}
