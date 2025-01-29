#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>>31)
    printf("Not Set");
    else
    printf("Set");
    return 0;
}