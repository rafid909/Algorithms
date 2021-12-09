#include<bits/stdc++.h>


using namespace std;

int main()
{
    float ax[100], ay[100], diff[100][100], nr=1.0, dr=1.0,x,p,h,yp;
    int n,i,j,k;

    printf("\nEnter the value of n:\n");
    scanf("%d",&n);

    printf("\nEnter the values in form x,y:\n");
    for (i=0;i<n;i++)
        scanf("%f %f",&ax[i],&ay[i]);

    printf("\nEnter the value of x for which the value of y is wanted: \n");
    scanf("%f",&x);

    h=ax[1]-ax[0];

    //now making the difference table
    //calculating the 1st order of differences
    for (i=0;i<n-1;i++)
        diff[i][1] = ay[i+1]-ay[i];

    //now calculating the second and higher order differences
    for (j=2;j<=n-1;j++)
        for(i=0;i<=n-j;i++)
        diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    //now finding x0
    i=0;
    while (!(ax[i]>x)){
            cout<<"AX="<<ax[i]<<endl;
        i++;
    }

    //now ax[i] is x0 and ay[i] is y0
    i--;
    p = (x-ax[i])/h;
    yp = ay[i];

    cout<<"P="<<p<<endl;

    //now carrying out interpolation
    for (k=1;k<=n-1;k++)
    {
        nr *=p-k+1;
        dr *=k;
        yp +=(nr/dr)*diff[i][k];
    }
    printf("\nWhen x = %6.1f, corresponding y = %6.2f\n",x,yp);
}
/*

Enter the value of n:
5

Enter the values in form x,y:
1891 46
1901 66
1911 81
1921 91
1931 101

Enter the value of x for which the value of y is wanted:
1905

When x = 1905.0, corresponding y =  73.54

Process returned 0 (0x0)   execution time : 96.058 s
Press any key to continue.

*/
