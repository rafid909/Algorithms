#include<stdio.h>

int main()
{
    int List[10], n, i, key;

    printf("Input the number of element:");
    scanf("%d",&n);

    printf("Input the values:\n");

    for(i=1; i<=n; i++)
    {
        scanf("%d",&List[i]);
    }

    printf("Input the key value: ");
    scanf("%d",&key);

    for(i=1; i<=n; i++)
    {
        if(key==List[i])
            printf("The Item is found in position: %d\n", i);
    }

}
