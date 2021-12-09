#include<bits/stdc++.h>

using namespace std;

int main()
{

  int i,n,time,remain,done=0,time_quantum;
  int p[50],burst_time[50],turnaround_time[50],waiting_time[50];
  float total_waiting_time=0, total_turnaround_time=0;


  printf("Enter The Number Process: ");
  scanf("%d",&n);

  remain=n;

  printf("Input Burst Time :\n");
  for(i=0;i<n;i++)
  {
    cout<<"p["<<i+1<<"]=";
    cin>>p[i];

    burst_time[i]=p[i];
  }
  printf("Enter Time Quantum: ");
  scanf("%d",&time_quantum);

  printf("\n\nProcess\t|Burst Time|\tTurnaround Time|\tWaiting Time\n\n");

  time=0;
  i=0;
  while(remain!=0)
  {
      if(burst_time[i]<=time_quantum && burst_time[i]>0)
      {
          time=time+burst_time[i];
          burst_time[i]=0;
          done=1;
      }
      else if(burst_time[i]>0)
      {
          burst_time[i]-=time_quantum;
          time+=time_quantum;
      }
      if(burst_time[i]==0 && done==1)
      {
          remain--;
          turnaround_time[i]=time;
          waiting_time[i]=turnaround_time[i]-p[i];
          done=0;
      }
      if(i==n-1)
      i=0;
    else i++;
  }
  waiting_time[0]=0;
  for(i=0;i<n;i++)
    printf("P[%d]\t|\t%d\t|\t%d\t|\t%d\n",i+1,p[i],turnaround_time[i],waiting_time[i]);


    for(i=0;i<n;i++)
    {
        total_waiting_time+= waiting_time[i];
    }
    cout<<"Average Waiting time is:"<<(total_waiting_time/n)<<endl;


    // Average Turnaround Time

    for(i=0;i<n;i++)
    {
        total_turnaround_time+= turnaround_time[i];
    }
    cout<<"Average Turnaround time is:"<<(total_turnaround_time/n)<<endl;


  return 0;
}
