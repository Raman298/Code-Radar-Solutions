#include<stdio.h>
int frequency_ele(int a[],int N){
    int visited[N];
    for(int i=0;i<N;i++){
        visited[i]=0;
    }
    for(int i=0;i<N;i++){
        if (visited[i]==1)
        continue;
        int count=1;
        for(int j=i+1;j<N;j++){
            if(a[i]==a[j]){
                count++;
                visited[j]=1;
            }
            
        }if(count>N/2){
                return count;
            }r3eturn -1;
        int max=0;
        
    }
}
int main(){
    int a[100],N,i,ele;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }
    frequency_ele(a,N);
}