#include<bits/stdc++.h>

#define f(x) (x*x*x-6*x+4)
#define f1(x) (3*x*x-6)

int main()
{
    float a,b,c,e,x;
    //int i=0;

    printf("Input a and b:");
    scanf("%f %f",&a,&b);

    if(f(a)*f(b)>=0)
    {
      printf("Invalid Input\n");
    return 0;
    }

    x=a;
    do
    {
        c=x-(f(x)/f1(x));

        e=x;
        x=c;
    }while(fabs(c-e)>0.01);

    printf("Root is: %f",c);
}
