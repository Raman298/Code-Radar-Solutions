#include<stdio.h>
int repeatarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]==arr[j]){
            return arr[i];
            break;}
            
        }//printf("%d",arr[i]);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",repeatarray(arr,n));
}