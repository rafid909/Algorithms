#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n, process_burst_time[10], waiting_time[10], turnaround_time[10];

    float avg_waiting_time=0.0, avg_turnaround_time=0.0;

    cout<<"Input the number of Processes:";
    cin>>n;

    cout<<"Input the burst time:"<<endl;

    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]= ";
        cin>>process_burst_time[i];
    }

    // Waiting Time
    waiting_time[1]=0;

    for(i=2;i<=n;i++)
        waiting_time[i]=waiting_time[i-1]+process_burst_time[i-1];

    cout<<"Waiting Time of Processes: \n";
    for(i=1;i<=n;i++)
        cout<<"P["<<i<<"]= "<<waiting_time[i]<<endl;

    //TurnAround Time
    for(i=1;i<=n;i++)
        turnaround_time[i]=waiting_time[i]+process_burst_time[i];

    cout<<"TurnAround Time of Processes: \n";
    for(i=1;i<=n;i++)
        cout<<"P["<<i<<"]= "<<turnaround_time[i]<<endl;

    //Average Waiting Time
    for(i=1;i<=n;i++)
        avg_waiting_time+=waiting_time[i];

    //Average TurnAround Time
    for(i=1;i<=n;i++)
        avg_turnaround_time+=turnaround_time[i];

    cout<<"Average Waiting Time= "<<avg_waiting_time/n<<endl;
    cout<<"Average TurnAround Time= "<<avg_turnaround_time/n<<endl;


}
