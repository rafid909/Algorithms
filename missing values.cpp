#include<bits/stdc++.h>

using namespace std;

int fac(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*fac(a-1);
}

int main()
{
    int x[10],y[10],n,i;
    float sum=0,fa=0,r;

    cout<<"Put -999 if the term is missing"<<endl;

    cout<<"Number of elements:\n";
    cin>>n;

    cout<<"Input the values:\n";
    for(i=0;i<n;i++)
        cin>>y[i];

    n--;
    //cout<<"n="<<pow((-n),3)<<endl;
    int j=0;

    for(i=n;i>=0;i--)
    {
       fa=fac(n)/(fac(i)*fac(n-i));
        fa*=pow((-1),j);
        j++;
       //cout<<fa<<endl;
       if(y[n-i]!=-999)
       sum+=(fa*y[n-i]);
       else
        r=fa;
      //cout<<"r="<<r<<endl;
    }
    cout<<"sum="<<sum<<endl;

    cout<<"missing term="<<(-1)*(sum/r);

}

/*
363
391
421
445
-999
500
*/
