#include <stdio.h>
int main() 
{
    char a;
    printf("enter your number:");
    scanf("%c",&a);
    if(a >= '0'&& a <= '9')
    {
        printf("digit");
    }
    else 
    {
        printf("character");
    }
    return 0;
}
