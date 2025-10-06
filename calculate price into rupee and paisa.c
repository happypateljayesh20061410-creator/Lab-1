#include <stdio.h>
int main()
{
    int paisa,rupee;
    float price;
    printf("enter price:");
    scanf("%f",&price);
    rupee=price;
    paisa=(price+rupee)*100;
    printf("rupee=%d\n",rupee);
    printf("paisa=%d\n",paisa);
    return 0;
}
