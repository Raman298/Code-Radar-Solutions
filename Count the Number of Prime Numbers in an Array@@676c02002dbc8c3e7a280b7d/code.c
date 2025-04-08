#include<stdio.h>
int countprime(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<2)return 0;
        if(arr[i]>2){
            for(int j=2;j<arr[i]/2;j++){
                if(arr[i]/j==0)
                return 0;
            }
            
        }   count++;
            return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result =countprime(arr,n);
    printf("%d",result);
}