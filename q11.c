#include<stdio.h>
int main(){
    int n;

    printf("How many numbers to be added in arrays: ");
    scanf("%d",&n);

    int arr[n],even=0,odd=0;

    for(int x=0;x<n;x++){
        printf("Enter number: ");
        scanf("%d",&arr[x]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    int even_arr[even],odd_arr[odd],e=0,o=0;

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            even_arr[e]=arr[j];
            e++;
        }
        else{
            odd_arr[o]=arr[j];
            o++;
        }
    }
    printf("Even array:-\n");
    for(int k=0;k<e;k++){
        printf("%d,",even_arr[k]);
    }
    printf("Odd array:-\n");
    for(int k=0;k<o;k++){
        printf("%d,",odd_arr[k]);
    }
return 0;
}