#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a>>b;
    if(a&1==1)
    printf("1");
    else
    printf("0");
    return 0;
}