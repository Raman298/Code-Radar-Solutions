#include<stdio.h>
int countgreater(int arr[],int n,int element){int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>element){
            count++;
        }
    }return count;
}
int main(){
    int n,element;
    scanf("%d %d",&n,&element);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countgreater(arr,n,element));
}