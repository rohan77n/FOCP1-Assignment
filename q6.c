#include<stdio.h>
#include<math.h>
int main()
{
    int choice,dec,rem,base=1,bin=0;
    printf("Binary to decimal\n decimal to binary\n");
    scanf("%d",&choice);

    if (choice==1)
    {
        int num, deci=0;
        printf("enter binary");
        scanf("%d",&num);
        while (num>0){
        rem=num%10;
        deci=deci+rem*base;
        num=num/10;
        base=base*2;
        }
        printf("decimal=%d",deci);
    }
    else if (choice==2)
    {
        printf("enter decimal");
        scanf("%d",&dec);
        while(dec>0){
            rem=dec%2;
            bin=bin+rem*base;
            dec=dec/2;
            base=base*1;
        }
        printf("binary=%d",bin);
    }
    else{
        printf("invalid choice");
    }
}