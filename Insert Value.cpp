#include<stdio.h>

int main()
{
    int arr[10], key, i, pos,n;

    printf("Input the size of array:");
    scanf("%d",&n);

    printf("Input the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("The given array is:\n");
    for(i=0;i<n;i++)
        printf("Arr[%d]=%d\n",i,arr[i]);

    printf("INPUT THE VALUE YOU WANT TO INSERT:");
    scanf("%d",&key);

    printf("Input the position:");
    scanf("%d",&pos);

    for(i=n-1;i>=pos;i--)
        arr[i+1]=arr[i];

    arr[pos]=key;

    printf("The updated array is:\n");
    for(i=0;i<=n;i++)
        printf("Arr[%d]=%d\n",i,arr[i]);

}
