#include<stdio.h>
int main(){
    int n;

    printf("how many elements are there in the array?");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter array elemeny %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int max=0,min=arr[0];

    for(int j=0;j<n;j++){
        if(arr[j]>max)
        max = arr[j];

        if(arr[j]<min)
        min = arr[j];
    }
    printf("max = %d",max);
    printf("\n min - %d",min);

    return 0;

}