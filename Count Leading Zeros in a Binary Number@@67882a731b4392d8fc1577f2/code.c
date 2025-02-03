#include <stdio.h>
int main() {
    int a,count;
    scanf("%d",&a);
    a=a<<31;
    count=0;
    while(a&1==0){
        
        count++;
    }
    printf("%d",a);
    return 0;
}