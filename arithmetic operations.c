#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("eneter your value A:");
    scanf("%d",&a);
    printf("enter your value B:");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a/b;
    f=a*b;
    printf("subtraction of Aand B is=%d",d);
    printf("multiplication of Aand B is=%d",f);
    printf("divition of Aand B is=%d",e);
    printf("sum of Aand B is=%d",c);
    return 0;
}
