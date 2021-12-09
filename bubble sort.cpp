
#include<stdio.h>

int main()
{
    int i,j,n,arr[10], temp;

    printf("Input The Number of Element:");
    scanf("%d",&n);

    printf("Input The numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

   printf("The Sorted List is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}
