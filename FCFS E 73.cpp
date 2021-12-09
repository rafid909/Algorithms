#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,bust_time[10],waiting_time[10],turnaround_time[10];

    float avg_waiting_time=0, avg_turn_time=0;

    cout<<"Please Enter the number of process:";
    cin>>n;

    cout<<"Enter the bust times:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"P["<<i<<"]=";
        cin>>bust_time[i];
    }

    waiting_time[1]=0;

    for(i=1;i<=n;i++)
    {
        waiting_time[i+1]=waiting_time[i]+bust_time[i];
    }

    for(i=1;i<=n;i++)
    {
        cout<<"Waiting Time["<<i<<"]="<<waiting_time[i]<<endl;
        avg_waiting_time = avg_waiting_time + waiting_time[i];
    }

    cout<<"The Total Waiting Time="<<avg_waiting_time<<endl;

    cout<<"The average Waiting Time="<<avg_waiting_time/n<<endl;

    for(i=1;i<=n;i++)
    {
        turnaround_time[i]=waiting_time[i]+bust_time[i];
    }

    for(i=1;i<=n;i++)
    {
        cout<<"TurnAround Time["<<i<<"]="<<turnaround_time[i]<<endl;
        avg_turn_time+=turnaround_time[i];
    }
    cout<<"The average TurnAround Time="<<avg_turn_time/n<<endl;
}










