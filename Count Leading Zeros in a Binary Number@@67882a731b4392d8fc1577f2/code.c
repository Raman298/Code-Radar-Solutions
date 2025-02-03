#include <stdio.h>
int main() {
    unsigned int num;
    int count=0;
    scanf("%d",&a);
    a=a<<31;
    count=0;
    for(int i=31;i>=0;i--){
        if((num&(1<<i))==0){
        count++;}
        else{
            break;
        }
    }
    printf("%d",count);
    return 0;
}