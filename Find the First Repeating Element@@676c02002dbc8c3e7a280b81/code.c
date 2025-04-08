#include<stdio.h>
#include<stdlib.h>
int repeatarray(int arr[],int n){
    int max=0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j])printf("%d",arr[i]);
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // printf("%d",repeatarray(arr,n));
}