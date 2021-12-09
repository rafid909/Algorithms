
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,temp,process[10],burst_time[10], wait_time[10],turnaround_time[10];
    float avg_waiting_time, avg_turnaround_time;

    cout<<"input the number of process:";
    cin>>n;


    cout<<"input the Burst Time of the corresponding process:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"Process["<<i<<"] = ";
        cin>>burst_time[i];
        process[i]=i;
    }

    /*
    cout<<"Input Processes:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"Process["<<i<<"] = "<<burst_time[i]<<endl;
    }
    */

    for(i=1; i<=n; i++)
        for(j=i+1; j<=n;j++)
        if(burst_time[i]>burst_time[j])
    {
        temp=burst_time[i];
        burst_time[i]=burst_time[j];
        burst_time[j]=temp;

        temp=process[i];
        process[i]=process[j];
        process[j]=temp;

    }

    cout<<"Input Processes:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"Process["<<process[i]<<"] = "<<burst_time[i]<<endl;
    }


     // Waiting Time
     cout<<process[1]<<endl;

    wait_time[process[1]]=0;

    for(i=1;i<=n;i++)
    {
        wait_time[process[i]+1]= wait_time[process[i]]+burst_time[i];
    }

    cout<<"\n\nWaiting Time:\n"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<< "Waiting Time P["<<process[i]<<"]= "<<wait_time[i]<<endl;
    }
/*
    for(i=1;i<=n;i++)
    {
        avg_waiting_time=avg_waiting_time+wait_time[process[i]];
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

*/
}



