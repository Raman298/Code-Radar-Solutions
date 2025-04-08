#include<stdio.h>
#include<stdbool.h>
int ispalindrome(int arr[],int n){
    int i=0;
    int l=n-1;
    while(i<l){
        if(arr[i]!=arr[l])
        return false;
        i++;l--;
    }
    return true;
}
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    if(ispalindrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}