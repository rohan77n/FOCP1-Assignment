#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    printf("\noriginal values x=%d,y=%d\n",x,y);

    //Using temporary variables
    temp=x;
    x=y;
    temp=y;
    printf("after swapping x=%d,y=%d\n",x,y);

    //Using arithmetic
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping x=%d,y%d\n",x,y);

    //Using bitwise XOR
    x=x^y;
    y=x^y;
    x=x^y;
    printf("after swapping x=%d,y=%d\n",x,y);

    //Using pointers
    int *p1=&x,*p2=&y;
    temp=*p1;
    *p1=*p2;
    *p2=*p1;
    printf("after swapping x=%d,y=%d\n",x,y);

    return 0;
}
