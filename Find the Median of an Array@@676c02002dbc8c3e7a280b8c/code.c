#include<stdio.h>
int sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int calcumedian(int arr[],int n){
    int s=n-1;
    if(n%2!=0){
        return arr[n/2];
    }return (arr[n/2]+arr[(n/2)-1]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    sorted(arr,n);
    printf("%d",calcumedian(arr,n));
}