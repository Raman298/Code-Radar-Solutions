#include<stdio.h>
int main(){
    int a[100];
    int shifts,N;
    scanf("%d",&N);
    for(int i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&shifts);
    int temp;
    for(int k=0;k<shifts;k++){
        temp=a[n-1];
    for(int i=1;i<N;i++){
        a[n-1]=a[i];
    }
    a[i]=temp;
}
for(int i=0;i<=N-1;i++){
    printf("%d ",a[i]);
}
}