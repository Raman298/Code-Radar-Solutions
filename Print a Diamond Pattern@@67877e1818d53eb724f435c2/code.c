// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int z=1;z<=n-i;z++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            // if(j<=n-i){
            //     printf(" ");
            // }
            // else{
                printf("*");
            }
        printf("\n");
        }
        for(int i=n-1;i>=1;i--){
            for(int z=1;z<=n-i;z++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            // if(j<=n-i){
            //     printf(" ");
            // }
            // else{
                printf("*");
            }
            printf("\n");
        }
        
    
}