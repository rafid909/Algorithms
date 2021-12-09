
#include<bits/stdc++.h>

using namespace std;

float fn(float x)
{
    return x*x-3;
}

void falsi(float a, float b)
{
    float c;
    int i=0;

    do
    {
        c=(a+b)/2;

        if(fn(c)==0)
            break;

        else if(fn(a)*fn(c)<=0)
            b=c;

        else a=c;

        i++;
        cout<<c<<endl;

    }while(fabs(b-a)>0.001);

    cout<<"The value of root is: "<<c<<endl;
}

int main()
{
    float a,b,c;

    cout<<"Put the input of a and b: ";
    cin>>a>>b;

    if(fn(a)*fn(b)>0)
        cout<<"Invalid Input\n";
    else
        falsi(a,b);

    return 0;

}
