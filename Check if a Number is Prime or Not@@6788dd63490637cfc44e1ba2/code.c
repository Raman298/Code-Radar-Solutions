#include<stdio.h>
int main(){
    int i=2,n;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }
    while(i<=(n/2)){
        if(n%i==0){
            printf("Not Prime");
            break;
        }
        i++;
    }
    if(i>(n/2)){
        printf("Prime");
    }
    return 0;
}