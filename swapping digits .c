#include <stdio.h>
int main() {
    int a,b,c;
    printf("eneter your value A:");
    scanf("%d",&a);
    printf("enter your value B:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swapped a = %d",a);
    printf("swapped b = %d",b);
    return 0;
}
