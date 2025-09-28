#include <stdio.h>
int main() {
    int a,b;
    printf("eneter your value A:");
    scanf("%d",&a);
    printf("enter your value B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    printf("value of a = %d",a);
    printf("value of b = %d",b);
    return 0;
}
