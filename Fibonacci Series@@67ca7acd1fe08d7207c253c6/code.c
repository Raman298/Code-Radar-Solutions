// Your code here...
#include<stdio.h>
int fabonacci(int n);
int fabonacci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fabonacci(n-1)+fabonacci(n-2);
}
int main(){
    int n;
    scanf("%d",n);
    printf("%d",fabonacci(n));
    return 0;
}