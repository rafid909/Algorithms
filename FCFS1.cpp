#include<iostream>

using namespace std;

int main()
{
    int n,i,p[10],w[10],t[10],avg_waiting_time=0,avg_turnaround_time=0;

    cout<<"Enter the number of process:\n";
    cin>>n;

    cout<<"Input Burst Time:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"p["<<i<<"]=";
        cin>>p[i];
    }

    cout<<"Brust Time\n";
    for(i=1;i<=n;i++)
    {
        cout<<"p["<<i<<"]=";
        cout<<p[i];
        cout<<"\n";
    }
    w[1]=0;
    for(i=1;i<n;i++)
    {
        w[i+1]=w[i]+p[i];
        //cout<<"W["<<i+1<<"]=";
    }
    cout<<"Waiting Time\n";
    for(i=1;i<=n;i++)
    {
        cout<<"W["<<i<<"]=";
        cout<<w[i];
        cout<<"\n";
    }

    for(i=1;i<=n;i++)
    {
        t[i]=w[i]+p[i];
        //cout<<"W["<<i+1<<"]=";
    }
    cout<<"TurnAround Time\n";
    for(i=1;i<=n;i++)
    {
        cout<<"T["<<i<<"]=";
        cout<<t[i];
        cout<<"\n";
    }

}
