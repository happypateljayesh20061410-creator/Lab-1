#include <stdio.h>
int main()
{
    int avg,a,b,c,sum;
    printf("enter your first no:");
    scanf("%d",&a);
    printf("enter your second no:");
    scanf("%d",&b);
    printf("enter your third no:");
    scanf("%d",&c);
    sum=a+b+c;
    avg=(a+b+c)/3;
    printf("sum=%d\n",sum);
    printf("avg=%d\n",avg);
    return 0;
}
