// Your code here...
int main(){
    int a[100];
    int shifts,N;
    
    scanf("%d",&N);
    for(int i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&shifts);
    int temp;
    for(int k=0;k<shifts;k++){
        temp=a[0];
    for(int i=n-1;i>=1;i++){
        a[i-1]=a[i];
    }
    a[N-1]=temp;
}
for(int i=0;i<=N-1;i++){
    printf("%d ",a[i]);
}
}