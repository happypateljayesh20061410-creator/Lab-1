#include <stdio.h>
int main() 
{
    char a;
    printf("enter your character:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("vovels");
    }
    else
    {
        printf("constants");
    }
    return 0;
}
