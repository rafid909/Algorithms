#include<bits/stdc++.h>

using namespace std;

int g[100][100],n,start;
queue<int>q;

void bfs()
{
    q.push(start);
     while(!q.empty())
     {
         start=q.front();
        for(int i=0;i<n;i++)
        {
        if(g[start][i]==1)
        {
            q.push(i);
            g[start][i]=0;
            g[i][start]=0;
            for(int j=0;j<n;j++)
                g[j][i]=0;

        }
        }
        cout<<q.front()<<" ";

        q.pop();

     }
}

int main()
{
    int i,j,start;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>g[i][j];

        cin>>start;


         bfs();
}
/*
7
0 1 0 1 1 0 0
1 0 1 0 1 0 0
0 1 0 0 1 1 1
1 0 0 0 1 0 0
1 1 1 1 0 1 0
0 0 1 0 1 0 1
0 0 1 0 0 1 0
*/
