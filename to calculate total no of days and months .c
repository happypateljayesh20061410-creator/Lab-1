#include <stdio.h>
int main() {
    int t,m,d;
    printf("eneter tatal no of days:");
    scanf("%d",&t);
    m=t/30;
    d=t%30;
    printf("no of months = %d \n",m);
    printf("no of days = %d",d);
    return 0;
}
