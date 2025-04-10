#include<stdio.h>
int maxeven(int arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max&& arr[i]%2==0){
            max=arr[i];
        }
    }if(max%2==0){
        return max;
    }return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max&& arr[i]%2==0){
            max=arr[i];
        }
    }
    printf("%d ",maxeven(arr,n));
}