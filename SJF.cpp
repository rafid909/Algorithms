#include<iostream>

using namespace std;

int main()

{

    int n, i, j, temp;
                int Process[50];

                int BurstTime[50];

                int WaitingTime[50];

                int TurnAroundTime[50];

                float AverageWaitingTime=0;

                float AverageTurnAroundTime=0;

    cout<<"Please Enter total number of processes: "<<endl;

    cin>>n;

    cout<<"Please Enter Process Burst Time"<<endl;

    for(i=0;i<n;i++)

    {

        cout<<"P["<<i+1<<"]:";

        cin>>BurstTime[i];
        Process[i]=i+1;

    }


    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
            if(BurstTime[i]>BurstTime[j])
            {
                temp=BurstTime[i];
                BurstTime[i]=BurstTime[j];
                BurstTime[j]=temp;

                temp=Process[i];
                Process[i]=Process[j];
                Process[j]=temp;
            }
        }



    WaitingTime[0]=0;

    //waiting time calculation

    for(i=0;i<n;i++)

    {
            WaitingTime[i+1]=WaitingTime[i]+BurstTime[i];
    }

    cout<<"Process \t\tBurst Time \t Waiting Time \t Turnaround Time"<<endl;

 //turnaround time calculation

    for(i=0;i<n;i++)

    {

        TurnAroundTime[i]=BurstTime[i]+WaitingTime[i];

        AverageWaitingTime+=WaitingTime[i];

        AverageTurnAroundTime+=TurnAroundTime[i];

        cout<<"P["<<Process[i]<<"]"<<"\t\t\t\t"<<BurstTime[i]<<"\t\t"<<WaitingTime[i]<<"\t\t"<<TurnAroundTime[i]<<endl;

    }



    cout<<"Average Waiting Time of all the processes:"<<AverageWaitingTime/n<<endl;

    cout<<"Average Turnaround Time of all the processes:"<<AverageTurnAroundTime/n<<endl;

    return 0;
}

