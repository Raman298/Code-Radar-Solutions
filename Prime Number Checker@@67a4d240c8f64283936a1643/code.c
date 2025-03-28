#include<stdio.h>
int isPrime(int n)
{
    if(n<0)
    return 0;
    for(int i=1;i<=n;i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}
