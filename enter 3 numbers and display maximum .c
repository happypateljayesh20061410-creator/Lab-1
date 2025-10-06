#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter your three number:");
    scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
    printf(" maximum =%d",a);
}
else if(b>a&&b>c)
{
    printf(" maximum=%d",b);
}
else
{
    printf("maximum=%d",c);
}
    return 0;
}
