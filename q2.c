#include<stdio.h>
int HCF(int x,int y);
void main()
{
    int n1,n2,c;
    printf("\nEnter the two number");
    scanf("%d%d",&n1,&n2);
    c=HCF(n1,n2);
    printf("\nHCF of n1 and n2 is %d",c);
}
int HCF(int x,int y)
{
    if(y!=0)
    {
        return HCF(y,x%y);
    }
    else
    {
        return x;
    }
}
