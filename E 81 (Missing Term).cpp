
#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int x[10], y[10], n, i, r, fa, p, nm;
    float sum=0;

    printf("Put -999 if the value is missing\n");

    printf("Number of elements:\n");
    scanf("%d", &n);

    printf("Input the values: \n");

    for(i=0;i<n;i++)
        scanf("%d",&y[i]);

    n=n-1;
    p=0;
    for(r=n; r>=0; r--)
    {
        fa=fact(n)/(fact(r)*fact(n-r));
        fa*= pow((-1),p);
        p++;

        if(y[n-r]!=-999)
            sum+=(fa*y[n-r]);

        else
            nm=fa;
    }
    printf("%f\n",sum);

    printf("Missing Term is: %f", (-1)*(sum/nm));



}
