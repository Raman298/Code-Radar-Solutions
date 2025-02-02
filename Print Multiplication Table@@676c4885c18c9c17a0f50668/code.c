#include <stdio.h>
int main() {
    int n;
    int i=1
    scanf("%d",&n);
    while(i<n){
        printf("%d * %d = %d \n",n,i,n*i);
        i++;
    }
    return 0;
}