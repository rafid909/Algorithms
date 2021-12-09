#include<stdio.h>
#include<algorithm.h>

int main()
{
    float arr[20], key;
    int n,i,loc=0,f,l,mid;

    printf("How many numbers in the list:");
    scanf("%d",&n);

    printf("Input the list values: \n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&arr[i]);
    }

    //sort(arr,arr+n);

    printf("Input the key value:");
    scanf("%f",&key);

    f=1;
    l=n;
    mid=(f+l)/2;

    while(f<=l)
    {
        if(key<arr[mid])
            l=mid-1;

        else if(key>arr[mid])
            f=mid+1;

        else if(key==arr[mid])
            {
                loc=mid;
                printf("Item %f is in position: %d \n",key,loc);
            }

        if(loc>0)
            break;

        mid=(f+l)/2;
    }

    if(loc==0)
    printf("Item not found\n");


}
