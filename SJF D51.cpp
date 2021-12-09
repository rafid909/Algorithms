#include<bits/stdc++.h>

using namespace std;

int main()
{
    int burst_time[10], waiting_time[10], turnaround_time[10], i,n,j,temp,process[10];
    float avg_wt=0, avg_ta=0;

    cout<<"Input the number of process: ";
    cin>>n;

    cout<<"Input the burst time of process:\n";
    for(i=1;i<=n;i++)
    {
        cin>>burst_time[i];
        process[i]=i;
    }

    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(burst_time[i]>burst_time[j])
            {
                temp=burst_time[i];
                burst_time[i]=burst_time[j];
                burst_time[j]=temp;

                temp=process[i];
                process[i]=process[j];
                process[j]=temp;
            }
        }
    }

    //waiting time
    waiting_time[1]=0;
    for(i=1;i<=n;i++)
        waiting_time[i+1]=waiting_time[i]+burst_time[i];

    cout<<"Waiting Time of Process:\n";
    for(i=1;i<=n;i++)
    {
        cout<<"process["<<process[i]<<"]="<<waiting_time[i]<<endl;
        avg_wt+=waiting_time[i];
    }

    cout<<"Average Waiting TIme="<<avg_wt/n<<endl;


}
