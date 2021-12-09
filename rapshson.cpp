#include<bits/stdc++.h>

#define f(x) (x*x-3)
#define f1(x) (2*x)

using namespace std;

int main()
{
    float a,b,c,e,x;
    int i=0;

    printf("Input a and b:");
    scanf("%f %f",&a,&b);

    if(f(a)*f(b)>=0)
    {
      printf("Invalid Input\n");
    return 0;
    }

//printf("Ite\tx0\t\t f(x0)\t f1(x0)\t c\n");
    x=a;
    do
    {
        //cout<<"f(a)= "<<f(a)<<"f1(a)= "<<f1(b)<<endl;
        c=x-(f(x)/f1(x));
         //printf("%2d\t%4.6f\t%4.6f\t%4.6f\t%4.6f\t",i++,x0,f(x0),f1(x0),c);
        e=x;
        x=c;
    }while(fabs(c-e)>0.01);

    cout<<"Root is:"<<c<<endl;
}
