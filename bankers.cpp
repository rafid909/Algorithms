#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n,m, alloc[10][10], maxx[10][10], need[10][10], avail[10],work[10];

    cout<<"input the number of process: ";
    cin>>n;

    cout<<"input the number of resource: ";
    cin>>m;

    cout<<"input allocation matrix"<<endl;

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        cin>>alloc[i][j];

    cout<<"input max matrix"<<endl;

    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        {
          cin>>maxx[i][j];
          need[i][j]=maxx[i][j]-alloc[i][j];
        }

    cout<<"The need matrix is"<<endl;

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
        {
          cout<<need[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Input available"<<endl;
    for(int i=0;i<m;i++)
        cin>>avail[i];
    }


    int visit[10];
    for(i=0;i<n;i++)
        visit[i]=0;

    for(i=0;i<m;i++)
        work[i]=avail[i];

    int cnt=0,flag=0;

    while(cnt<n-1)
    {
        flag=0;
        if(visit[cnt]==0)
        {
            for(int i=0;i<m;i++)
            {
                if(need[cnt][i]>avail[i])
                {
                    flag=1;
                }

            }
            if(flag==0)
                visit[cnt]=1;
              for(int i=0;i<m;i++)
               avail[i]+=alloc[cnt]
        }
    }

}
*/
/*
Allocation:

0 1 0
2 0 0
3 0 2
2 1 1
0 0 2

Max:

7 5 3
3 2 2
9 0 2
2 2 2
4 3 3

Resource:

3 3 2
*/
