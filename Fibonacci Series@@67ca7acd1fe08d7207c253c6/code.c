// Your code here...
#include<stdio.h>
int fabonacciSeries(int n);
int fabonacciSeries(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fabonacciSeries(n-1)+fabonacciSeries(n-2);
}
int main(){
    int n;
    scanf("%d",n);
    printf("%d",fabonacciSeries(n));
    return 0;
}