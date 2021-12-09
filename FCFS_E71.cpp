#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,process[10],burst_time[10], wait_time[10],turnaround_time[10];
    float avg_waiting_time, avg_turnaround_time;

    cout<<"input the number of process:";
    cin>>n;


    cout<<"input the Burst Time of the corresponding process:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"Process["<<i<<"] = ";
        cin>>burst_time[i];
    }

    // Waiting Time

    wait_time[1]=0;

    for(i=1;i<=n;i++)
    {
        wait_time[i+1]= wait_time[i]+burst_time[i];
    }

    cout<<"\n\nWaiting Time:\n"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<< "Waiting Time P["<<i<<"]= "<<wait_time[i]<<endl;
    }

    for(i=1;i<=n;i++)
    {
        avg_waiting_time=avg_waiting_time+wait_time[i];
    }
    cout<<"Average Waiting Time= "<<(avg_waiting_time/n)<<endl;


    //TurnAround Time


    for(i=1;i<=n;i++)
    {
        turnaround_time[i]= wait_time[i]+burst_time[i];
    }

    cout<<"\n\nTurnAround Time:\n"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<< "Turnaround Time P["<<i<<"]= "<<turnaround_time[i]<<endl;
    }

    for(i=1;i<=n;i++)
    {
        avg_turnaround_time+=turnaround_time[i];
    }
    cout<<"Average Turnaround Time= "<<(avg_turnaround_time/n)<<endl;

}
