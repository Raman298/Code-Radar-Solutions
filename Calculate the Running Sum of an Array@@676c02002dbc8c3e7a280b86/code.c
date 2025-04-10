#include<stdio.h>
int runningarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        sum+=arr[i];
        return sum;

    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",runningarray(arr,n));
}