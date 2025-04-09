#include<stdio.h>
int countpalindrome(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){int b=arr[i];int j=1;
        while(b>0){
        int r=b%10;
        j=r;
        b=b/10;
        }
        if(j==arr[i]){
            count++;
        }
        
    }return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countpalindrome(arr,n));
}