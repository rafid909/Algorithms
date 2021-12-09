#include<bits/stdc++.h>

using namespace std;

float func(float x)
{
    return (3*x*x)- x -1;
}

int main()
{
    float a,b,c;

    cout<<"Input the value of a and b: ";
    cin>>a>>b;

    if(func(a)*func(b)>=0){
        cout<<"Invalid a and b selection"<<endl;
        return 0;
    }

    int   n=1;
    while(n++ <=5)
    {
        c=(a*func(b)-b*func(a))/(func(b)-func(a));
        //cout<<"c="<<c<<endl;
        if (func(c) == 0.0){
            printf("Root = %lf\n",c);
            break;
        }
        else if (func(c)*func(a) < 0){
                printf("Root = %lf\n",c);
                b = c;
        }
        else{
                printf("Root = %lf\n",c);
                a = c;
        }
    }
    cout<<"The root value is: "<<c<<endl;

}
