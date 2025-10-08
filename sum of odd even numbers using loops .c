#include <stdio.h>
int main() 
{
    int i,n, se=0,so=0;
    printf("enter your value:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
{
   if(i%2==0)
   {
       se=se+i;
   }
   else
   {
       so=so+i;
   }
}
printf("sum of even numbers=%d\n",se);
printf("sum of odd numbers=%d",so);
    return 0;
}
