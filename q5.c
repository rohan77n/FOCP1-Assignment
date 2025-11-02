#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y");
    scanf("%d%d",&x,&y);

    if(x>0&&y>0)
    printf("point lies in 1st quadrant\n");
    else if(x<0&&y>0)
    printf("point lies in 2nd quadranr\n");
    else if(x<0&&y<0)
    printf("point lies in 3rd quadranr\n");
    else if(x>0&&y<0)
    printf("point lies in 4th quadrant\n");
    else if(x==0&&y==0)
    printf("point is at the origin\n");
    else if(x==0)
    printf("point lies on x axis\n");
    else if (y==0)
    printf("point lies on y axis");

    return 0;
}