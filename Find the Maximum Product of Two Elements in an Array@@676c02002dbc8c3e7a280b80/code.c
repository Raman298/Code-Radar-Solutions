#include<stdio.h>
#include<stdlib.h>
int sumarray(int arr[],int n){
    int max=0;
    for(int i=0;i<n-1;i++){
        int b=abs(arr[i]);
        
        if(max<arr[i]*arr[i+1]){
        max=arr[i]*arr[i+1];
        }
    }return max;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sumarray(arr,n));
}