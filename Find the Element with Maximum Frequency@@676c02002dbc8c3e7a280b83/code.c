#include<stdio.h>

int frequency_ele(int a[],int N){
    //int count=0;
    int visited[N];
    for(int i=0;i<N;i++){
        visited[i]=0;
    }int maxfrexquency=0;
    int result;
    for(int i=0;i<N;i++){
        if (visited[i]==1)
        continue;
        int count=1;
        
        for(int j=i+1;j<N;j++){
            if(a[i]==a[j]){
                count++;
                visited[j]=1;
            }
        
        }
        if(maxfrexquency<count){
            maxfrexquency=count;
            result=a[i];

        }
        
    }return result;
}
int main(){
    int a[100],N,i,ele;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",frequency_ele(a,N));
}

