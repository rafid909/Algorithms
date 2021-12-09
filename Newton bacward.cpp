#include<bits/stdc++.h>


using namespace std;

int main()
{
    float ax[100], ay[100], diff[100][100], nr=1, dr=1, x, h, yp,p;
    int n,i,j,k;

    cout<<"Input the number of elements:";
    cin>>n;

    cout<<"Enter the values of x and y:\n";
    for(i=0;i<n;i++)
        cin>>ax[i]>>ay[i];

    cout<<"Input the value of x for which y is wanted:";
    cin>>x;

    h=ax[1]-ax[0];

    for(i=0;i<n-1;i++)
        diff[i][1] = ay[i+1] - ay[i];

    for(j=2; j<=n-1; j++)
        for(i=0;i<=n-j;i++)
        diff[i][j] = diff[i+1][j-1] - diff[i][j-1];

    i=n-1;

    p=(x-ax[i])/h;
    yp=ay[i];
    i--;

    for(k=1;k<n;k++)
    {
        nr*=p+k-1;
        dr*=k;
        yp+=(nr/dr)*diff[i--][k];
    }
    cout<<"the value of y is= "<<yp<<endl;




}
