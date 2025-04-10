#include<stdio.h>
int main(){
    int n,i,ele;int arr[n];
    scanf("%d %d",&n,&ele);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);int count=0;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
        count++;}
    }printf("%d",count);
}