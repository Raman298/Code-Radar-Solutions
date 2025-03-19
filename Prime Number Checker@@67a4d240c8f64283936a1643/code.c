#include<stdio.h>
int isPrime(int num)
{
    if(n<2){
        return 0;
    }
    while(i<=(n/2)){
        if(n%i==0){
            return 0;
        break;
        }
        i++;
    }
    if(i>(n/2)){
        return 1;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}