// Your code here...
#include<stdio.h>
int fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    printf("%d\n",fibonacciSeries(i));
    //return 0;
}
int fibonacciSeries(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}