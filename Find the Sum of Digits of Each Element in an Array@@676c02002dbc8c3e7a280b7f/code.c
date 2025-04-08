#include<stdio.h>
#include<stdlib.h>
int sumarray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int sum=0,a;
        int b=abs(arr[i]);
        while(b>0){
        a=b%10;
        sum+=a;
        b=b/10;
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