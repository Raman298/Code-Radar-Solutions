#include <stdio.h>
int main() {
    int n,i=1;
    scanf("%d",&n);
    for(i<n;i++){
        printf("%d * %d = %d",n,i,n*i);
    }
    return 0;
}