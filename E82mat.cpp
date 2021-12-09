
#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2,d;
    float dist;

    printf("input the x-coordinate & y-coordinate of point one:");
    scanf("%d %d",&x1,&y1);

    printf("input the x-coordinate & y-coordinate of point two:");
    scanf("%d %d",&x2,&y2);

    d=pow((x1-x2),2) + pow((y1-y2),2);

    dist=sqrt(d);

    printf("the distance is= %.4f\n",dist);
}
