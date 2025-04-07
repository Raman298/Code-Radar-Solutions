#include<stdio.h>
int main(){
    int a[100];
    int shifts,N;
    scanf("%d",&N);
    for(int i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&shifts);
    int temp,i;
    for(int k=0;k<shifts;k++){
        temp=a[N-1];
    for(i=n-1;i>0;i++){
        a[N-1]=a[i];
    }
    a[i]=temp;
}
for(int i=0;i<=N-1;i++){
    printf("%d ",a[i]);
}
}