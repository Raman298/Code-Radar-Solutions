// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int z=1;z<=i;z++){
            printf(" ");
        }
        
        for(int j=1;j<=2*i-1;j++){
                printf("%d ",j);
            }
        printf("\n");
        }
        
    
}