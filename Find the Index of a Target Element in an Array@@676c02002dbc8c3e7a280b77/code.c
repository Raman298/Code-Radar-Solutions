#include<stdio.h>
int main(){
    int n,i,ele;int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);int count=0;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
        printf("%d ",i);
        count++;
        break;}
    }
    if(!count){
        printf("-1");
    }
}