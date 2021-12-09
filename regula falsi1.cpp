// C++ program for implementation of Bisection Method for
// solving equations
#include<bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2  + 2
float func(float x)
{
    return  3*x- cos(x)-1;
}

// Prints root of func(x) in interval [a, b]
void regulaFalsi(float a, float b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    float c = a;  // Initialize result
int i=0;
    do
    {

        c = (a*func(b) - b*func(a))/ (func(b) - func(a));

        // Check if the above found point is root
        if (func(c)==0)
            break;


        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
            cout<<i++<<endl;
    }while(fabs(b-a)>0.01);
    cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
    // Initial values assumed
    float a =0, b = 1;
    regulaFalsi(a, b);
    return 0;
}
