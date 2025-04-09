#include<stdio.h>
#include<stdlib.h>

int ismonotonic(int arr[],int n){
   for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]||arr[i]<arr[i+1]){
            return true;
        }
        return false;
    }   
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }  
    if(ismonotonic){
        printf("YES");
    }
    else{
        printf("NO");
    }
}