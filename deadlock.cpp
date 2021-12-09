#include<bits/stdc++.h>

using namespace std;



int main()
{
    int i,j,n,m, alloc[10][10], maxx[10][10], need[10][10], avail[10],work[10],safeSequence[10];

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
         flag = 0;
         for (int i = 0;i < n; i++)
         {
             if (visit[i] == 0)
             {
               int j;
               for (j = 0;j < m; j++)
               {
                  if (need[i][j] > work[j])
                       break;
               }
              if (j == m)
             {
               safeSequence[cnt++]=i;
               visit[i]=1;
               flag=1;
               for (j = 0;j < m; j++)
               {
                 work[j] = work[j]+alloc[i][j];
               }
             }
            }
         }
        if (flag == 0)
        {
          break;
        }
       }
     if (cnt < n)
          printf("The System is UnSafe!");
     else
     {
     printf("Following is the SAFE Sequence");
     for (int i = 0;i < n; i++)
     {
         printf("P" + safeSequence[i]);
         if (i != n-1)
          printf(" -> ");
     }
     }
   }

