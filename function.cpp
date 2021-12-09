
#include<stdio.h>


int sum(int n)
{
    printf("The value of n=%d\n", n);
   if(n==6)
    return 1;

    return n+sum(n-1);


}


int main()
{
    int n;
    scanf("%d",&n);
    printf("The Sum of 1 to %d is = %d\n",n,sum(n));

}
