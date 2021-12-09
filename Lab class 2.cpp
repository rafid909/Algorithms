
#include<stdio.h>

int main()
{
   int a,b;

   printf("Input a and b:");

   scanf("%d %d",&a,&b);

   if(a<b)
        printf("b-a= %d\n",b-a);

   else
     printf("a-b= %d\n",a-b);
}
