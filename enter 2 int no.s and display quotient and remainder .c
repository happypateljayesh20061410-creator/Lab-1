#include <stdio.h>
int main()
{
    float qua;
    int a,b,rem;
    printf("enter 2 values:");
    scanf("%d %d",&a, &b);
    qua=(float)a/(float)b;
    rem=b%a;
    printf("quotient=%f\n",qua);
    printf("remainder=%d",rem);
    return 0;
}
