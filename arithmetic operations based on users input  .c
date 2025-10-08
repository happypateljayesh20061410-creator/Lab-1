#include <stdio.h>
int main() 
{
   int a,b,c,add,sub,mul,div;
   printf("enter the value of A :");
   scanf("%d",&a);
   printf("enter the value of B :");
   scanf("%d",&b);
   printf("1. Addition\n");
   printf("2. Subtraction\n");
   printf("3. Multiplication\n");
   printf("4. Divition\n");
   printf("enter your choice :");
   scanf("%d",&c);    
   if(c==1)
   {
       add=a+b;
       printf(" Sum=%d",add);
   }
     else if(c==2)
   {
       sub=a-b;
       printf(" Sub=%d",sub);
   }
     else if(c==3)
   {
       mul=a*b;
       printf(" mul=%d",mul);
   }
    else if(c==1)
   {
       div=a/b;
       printf(" div=%d",div);
   }
   else 
   {
  printf("wrong choice");
   }
    return 0;
}
