#include<stdio.h>
int isPrime(int n)
{
    if(n<0)
    return 0;
    else(){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}
