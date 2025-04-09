#include<stdio.h>
int runningarray(int arr,int n){
    for(int i=0;i<n;i++){
        int sum=0;
        sum+=arr[i];
        printf("%d",sum);

    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    runningarray(arr,n);
}