#include<stdio.h>
int sumarray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int sum=0,a;
        while(arr[i]>0){
        a=arr[i]%10;
        sum+=a;
        arr[i]=arr[i]/10;
        }
        arr[i]=sum;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumarray(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}