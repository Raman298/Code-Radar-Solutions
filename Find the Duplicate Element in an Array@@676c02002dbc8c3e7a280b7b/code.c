#include<stdio.h>
int duplielement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",duplielement(arr,n));
}