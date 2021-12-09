#include<bits/stdc++.h>

using namespace std;

int main()
{
    int bust_time[10],waiting_time[10],turnaround_time[10], n, i;

    float avg_wt=0, avg_ta=0;

    cout<<"Please enter the number of process: ";
    cin>>n;

    cout<<"Enter the burst of processes:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]=";
        cin>>bust_time[i];
    }

    //Waiting time

    waiting_time[1]=0;
    for(i=1;i<=n;i++)
    {
        waiting_time[i+1]=waiting_time[i]+bust_time[i];
    }

    cout<<"The waiting time of the processes:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]="<<waiting_time[i]<<endl;
        avg_wt+=waiting_time[i];
    }
    cout<<"Average Waiting Time = "<<avg_wt/n<<endl;

    // TurnAround time


    for(i=1;i<=n;i++)
    {
        turnaround_time[i]=waiting_time[i]+bust_time[i];

    }

    cout<<"The TurnAround time of the processes:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]="<<turnaround_time[i]<<endl;
        avg_ta+=turnaround_time[i];
    }

    cout<<"Average TurnAround Time = "<<avg_ta/n<<endl;
}








