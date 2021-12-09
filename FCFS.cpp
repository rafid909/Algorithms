#include<iostream>

using namespace std;

int main()

{

    int n, i, j;

                int BurstTime[50];

                int WaitingTime[50];

                int TurnAroundTime[50];

                int AverageWaitingTime=0;

                int AverageTurnAroundTime=0;

    cout<<"Please Enter total number of processes you want to schedule: maximum allowed are 50 processes"<<endl;

    cin>>n;

    cout<<"Please Enter Process Burst Time"<<endl;

    for(i=0;i<n;i++)

    {

        cout<<"P["<<i+1<<"]:"<<endl;

        cin>>BurstTime[i];

    }

    WaitingTime[0]=0;

    //waiting time calculation

    for(i=0;i<n;i++)

    {

       // WaitingTime[i]=0;

        //for(j=0;j<i;j++)

            WaitingTime[i+1]=WaitingTime[i]+BurstTime[i];

    }

    cout<<"Process \t\tBurst Time \t Waiting Time \t Turnaround Time"<<endl;

 //turnaround time calculation

    for(i=0;i<n;i++)

    {

        TurnAroundTime[i]=BurstTime[i]+WaitingTime[i];

        AverageWaitingTime+=WaitingTime[i];

        AverageTurnAroundTime+=TurnAroundTime[i];

        cout<<"P["<<i+1<<"]"<<"\t\t\t\t"<<BurstTime[i]<<"\t\t"<<WaitingTime[i]<<"\t\t"<<TurnAroundTime[i]<<endl;

    }

    AverageWaitingTime/=i;

    AverageTurnAroundTime/=i;

    cout<<"Average Waiting Time of all the processes:"<<AverageWaitingTime<<endl;

    cout<<"Average Turnaround Time of all the processes:"<<AverageTurnAroundTime<<endl;

    return 0;
}
