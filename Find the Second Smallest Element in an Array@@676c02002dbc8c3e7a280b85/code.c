#include<stdio.h>
int smallelement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp=arr[i];
            if(arr[i]>arr[j]){
                arr[i]=arr[j];
            }arr[j]=temp;
        }
    }return arr[1];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i+=){
        scanf("%d",arr[i]);
    }
    smallelement(arr,n);
}
