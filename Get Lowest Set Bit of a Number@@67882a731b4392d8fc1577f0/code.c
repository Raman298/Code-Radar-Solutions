#include <stdio.h>
int main() {
    int a,count;
    scanf("%d",&a);
    count=0;
    while((n&1)==0)
    {
        n=n>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}