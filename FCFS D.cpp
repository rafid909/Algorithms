#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, process_burst_time[10],waiting_time[10], turnaround_time[10];

    float avg_waiting_time=0, avg_turnaround_time=0;

    cout<<"Please Input the number of process: ";
    cin>>n;

    cout<<"Please enter the burst times :"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<"P"<<i<<"= ";
        cin>>process_burst_time[i];
    }

    // Waiting Time

    waiting_time[1]=0;

    for(i=1;i<=n;i++)
    {
        waiting_time[i+1]=waiting_time[i]+process_burst_time[i];
    }


    cout<<"The Waiting Times are :"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<"P"<<i<<"= "<<waiting_time[i]<<endl;
    }

    // Turn Around Time.

    for(i=1;i<=n;i++)
    {
        turnaround_time[i]=waiting_time[i]+process_burst_time[i];
    }


    cout<<"The Turnaround Times are :"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<"P"<<i<<"= "<<turnaround_time[i]<<endl;
    }


    // Average Waiting Time

    for(i=1;i<=n;i++)
    {
        avg_waiting_time+= waiting_time[i];
    }
    cout<<"Average Waiting time is:"<<(avg_waiting_time/n)<<endl;


    // Average Turnaround Time

    for(i=1;i<=n;i++)
    {
        avg_turnaround_time+= turnaround_time[i];
    }
    cout<<"Average Turnaround time is:"<<(avg_turnaround_time/n)<<endl;





}
