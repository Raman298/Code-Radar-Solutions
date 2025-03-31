// Your code here...
#include<stdio.h>
int main(){
    int a[100];
    int shifts,N;scanf("%d",&N);
    scanf("%d",&shifts);
    
    for(int i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int k=0;k<shifts;k++){
        temp=a[0];
    for(int i=1;i<N;i++){
        a[i-1]=a[i];
    }
    a[N-1]=temp;
}
for(int i=0;i<=N-1;i++){
    printf("%d\n",a[i]);
}
}