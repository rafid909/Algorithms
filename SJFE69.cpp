#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j, p[10], w[10], t[10],temp,b[10];
    float avg_wt, avg_ta;

    cout<<"Input the number of process:\n";

    cin>>n;

    cout<<"Input Burst Time:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"] = ";
        cin>>b[i];
        p[i]=i;
    }

    cout<<"Burst Time:\n";

    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"] = ";
        cout<<b[i];
        cout<<"\n";
    }

 //Sorting the Burst time and Process

    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        if(b[i]>b[j])
    {
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;

        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
    }

    cout<<"sorted time"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<p[i]<<"] = ";
        cout<<b[i];
        cout<<"\n";
    }

     // Waiting time calculation
   w[1]=0;

   for(i=1;i<n;i++)
   {
       w[i+1]=w[i]+p[i];
   }

   cout<<"Waiting Time:\n";

    for(i=1;i<=n;i++)
    {
        cout<<"Waiting time["<<i<<"] = ";
        cout<<w[i];
        cout<<"\n";
    }
    avg_wt=0.0;
    cout<<"Average Waiting Time= ";
    for(i=1;i<=n;i++)
        {
            avg_wt+= w[i];
        }
        avg_wt/=n;
        cout<<avg_wt<<endl;
        cout<<"\n\n\n";


        // Turnaround time calculation
    for(i=1;i<=n;i++)
    {
        t[i]=w[i]+p[i];
    }

    cout<<"Turnaround Time:\n";

    for(i=1;i<=n;i++)
    {
        cout<<"Turnaround time["<<i<<"] = ";
        cout<<t[i];
        cout<<"\n";
    }

    cout<<"Average Turnaround Time= ";
    for(i=1;i<=n;i++)
        {
            avg_ta+= t[i];
        }
        avg_ta/=n;
        cout<<avg_ta<<endl;
        cout<<"\n\n\n";

}
