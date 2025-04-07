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
        temp=a[i];
    for(i=N-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[i-1]=temp;
}
for(int i=0;i<=N-1;i++){
    printf("%d ",a[i]);
}
}