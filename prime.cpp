#include<stdio.h>
#include<math.h>

int main()
{
    int y;

    for(y=1990;y<=2020;y=y+1)
    {
       if(y%4==0 && y%100!=0)
       printf("%d is Leap year.\n",y);

       else if(y%400==0)
       printf("%d is Leap year.\n",y);


    }

}
