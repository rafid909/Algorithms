#include<iostream>

using namespace std;

int main()
{
    int burst_time[20],process[20],waiting_time[20],turnaround_time[20],priority[20],i,j,n,pos,temp;

    float avg_wt,avg_tat,total=0;

    cout<<"Enter Total Number of Process:";
    cin>>n;

    cout<<"\nEnter Burst Time and Priority\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nProcess["<<i+1<<"]\n";
        cout<<"Burst Time:";
        cin>>burst_time[i];
        cout<<"Priority:";
        cin>>priority[i];
        process[i]=i+1;           //contains process number
    }

    //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        if(priority[i]>priority[j])
    {
        temp=priority[i];
        priority[i]=priority[j];
        priority[j]=temp;

        temp=burst_time[i];
        burst_time[i]=burst_time[j];
        burst_time[j]=temp;

        temp=process[i];
        process[i]=process[j];
        process[j]=temp;

    }

    cout<<"\nProcess\t    Burst Time    \tpriority";
    for(i=0;i<n;i++)
    {

        cout<<"\nProcess["<<process[i]<<"]\t\t  "<<burst_time[i]<<"\t\t    "<<priority[i];
    }




    waiting_time[0]=0;            //waiting time for first process is zero

    //calculate waiting time
    for(i=1;i<n;i++)
    {
        waiting_time[i]=0;
        for(j=0;j<i;j++)
            waiting_time[i]+=burst_time[j];

        total+=waiting_time[i];
    }

    avg_wt=total/n;      //average waiting time
    total=0;

    cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        turnaround_time[i]=burst_time[i]+waiting_time[i];     //calculate turnaround time
        total+=turnaround_time[i];
        cout<<"\nP["<<process[i]<<"]\t\t  "<<burst_time[i]<<"\t\t    "<<waiting_time[i]<<"\t\t\t"<<turnaround_time[i];
    }

    avg_tat=total/n;     //average turnaround time
    cout<<"\n\nAverage Waiting Time="<<avg_wt;
    cout<<"\nAverage Turnaround Time="<<avg_tat;


    return 0;
}
