// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int counteven=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        counteven++;
    }
    printf("%d ",counteven);
    int countodd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)
        countodd++;
    }
    printf("%d",countodd);
    return 0;
}