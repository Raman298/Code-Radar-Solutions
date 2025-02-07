#include <stdio.h>
int main() {
    int num,count=0;
    if(num&1==0)
    printf("0");
    while(num>>1==0){
        count++;
        printf("%",count);
    }
    return 0;
}