#include <stdio.h>
int main() 
{
    int a,b,c,add,sub,mul,div;
    printf("enter your value A:");
    scanf("%d",&a);
    printf("enter your value b:");
    scanf("%d",&b);
    printf("enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
    printf("Addition");
    add=a+b;
    printf("Addition =%d",add);
    break;
    case 2:
    printf("Subtraction");
    sub=a-b;
    printf("Subtraction =%d",sub);
    break;
    case 3:
    printf("Multiplication");
    mul=a*b;
    printf("Multiplication =%d",mul);
    break;
    case 4:
    printf("Division");
    div=a/b;
    printf("Division =%d",div);
    break;
default:
printf("invaild output");
break;
}
    return 0;
}
