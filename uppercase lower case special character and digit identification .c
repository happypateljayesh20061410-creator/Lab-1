int main() 
{
   char a;
   printf("enter your value :");
   scanf("%c",&a);
   if(a>='a'&& a<='z')
   {
       printf("lowercase");
   }
  else if(a>='A'&& a<='Z')
   {
       printf("uppercase");
   }
  else if(a>='0'&& a<='9')
   {
       printf("digit");
   }
  else
   {
       printf("special character");
   }
    return 0;
}
