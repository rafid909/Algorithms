#include<bits/stdc++.h>

using namespace std;

int main()
{
    int burst_time[10], waiting_time[10],turnaround_time[10], n,i,j, temp, process[10];
    float WT=0, TA=0;

    cout<<"Enter the number of process: ";
    cin>>n;

    cout<<"Input the burst time of process: \n";
    for(i=1;i<=n;i++)
        {
           cin>>burst_time[i];
           process[i]=i;
        }

    cout<<"The process burst times are: \n";
    for(i=1;i<=n;i++)
        {
           cout<<"Process["<<i<<"]= "<<burst_time[i]<<endl;
        }

    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
        if(burst_time[i]>burst_time[j])
    {
        temp=burst_time[i];
        burst_time[i]=burst_time[j];
        burst_time[j]=temp;

        temp=process[i];
        process[i]=process[j];
        process[j]=temp;
    }


    cout<<"Rearrange the process Burst Time: \n";
    for(i=1;i<=n;i++)
        {
           cout<<"Process["<<process[i]<<"]= "<<burst_time[i]<<endl;
        }

  //Waiting Time

  waiting_time[1]=0;
  for(i=1;i<=n;i++)
    waiting_time[i+1]=waiting_time[i]+burst_time[i];

  cout<<"Waiting Time of Process:\n";
  for(i=1;i<=n;i++)
  {
      cout<<"Waiting Time Process["<<process[i]<<"]= "<<waiting_time[i]<<endl;
      WT+=waiting_time[i];
  }

  cout<<"Average Waiting Time= "<<WT/n<<endl;

  //TurnAround Time

  for(i=1;i<=n;i++)
  {
      turnaround_time[i]=waiting_time[i]+burst_time[i];

  }

  cout<<"TurnAround Time of Process:\n";
  for(i=1;i<=n;i++)
  {
      cout<<"TurnAround Time Process["<<process[i]<<"]= "<<turnaround_time[i]<<endl;
      TA+=turnaround_time[i];
  }
   cout<<"Average TurnAround Time= "<<TA/n<<endl;

}
