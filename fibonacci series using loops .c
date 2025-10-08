#include <stdio.h>
int main() 
{
    int i, n,n1=0,n2=1,n3;
    printf("enter your value:");
    scanf("%d",&n);
    printf("%d",n1);
     printf("%3d",n2);
    for(i=0;i<n;i++)
{
   n3=n1+n2;
    printf("%3d",n3);
    n1=n2;
    n2=n3;
}
    return 0;
}
