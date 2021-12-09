
#include<bits/stdc++.h>
#define pi 0.01

using namespace std;

double func(double x)
{
    return (x*x)-3;
}

//double err=0.01;
double c;

void bisection(double a, double b)
{
    if(func(a)*func(b)>=0)
    {
        printf("Incorrect a and b \n");
        return;
    }
    c=a;

    while((b-a)>=err)
    {
        c=(a+b)/2;
        if(func(c)==0.0)
        {
            printf("Root = %lf\n",c);
            break;
        }
        else if(func(c)*func(a) < 0)
        {
            //cout<<"Root = "<<c<<endl;
            b=c;
        }
        else
        {
            //cout<<"Root = "<<c<<endl;
            a=c;
        }
    }


}

int main()
{
    double a,b;

    printf("The function used: x^2 - 3\n");

    printf("Input the value of a and b:");
    scanf("%lf %lf",&a,&b);


    bisection(a,b);

    printf("The root using bisection method is: %lf\n",c);

    return 0;
}
