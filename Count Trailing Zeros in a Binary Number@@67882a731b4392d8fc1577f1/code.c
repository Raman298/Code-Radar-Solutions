#include <stdio.h>
int main() {
    int num,count=0;
    scanf("%d",&num)
    if(num&1==0)
    printf("0");
    while(num>>1==0){
        count++;
        printf("%d",count);
    }
    return 0;
}