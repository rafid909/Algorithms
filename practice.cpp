// Given ten students examination marks. Print the marks which are greater than the average.


#include<stdio.h>

int main()
{
    int marks[11],i,sum=0,avg;

    printf("Input the marks of ten students:\n");
    for(i=1;i<=10;i++)
       {
           scanf("%d",&marks[i]);
       }

    for(i=1;i<=10;i++)
         {
             sum=sum+marks[i];
         }

         avg=sum/10;
    printf("Average=%d\n",avg);

    printf("The Marks Greater than the average:\n");
    for(i=1;i<=10;i++)
    {
        if(marks[i]>=avg)
        {
            printf("Mark[%d]= %d\n",i,marks[i]);

        }
    }

    return 0;
}
