// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
            printf(" ");
        }
        
        for(int j=1;j<=i;j++){
                printf("%d",j);
            }
        // for(int k=i-1;k>=1;k--){
        //     printf("%d",k);
        // }
        printf("\n");
        }
}