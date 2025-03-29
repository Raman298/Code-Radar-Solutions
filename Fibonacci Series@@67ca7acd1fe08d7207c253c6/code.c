// Your code here...
#include<stdio.h>
int fibonacciSeries(int n){
    for(int i=0;i<n;i++){
    if(i==0)
    return 0;
    if(i==1)
    return 1;
    return fibonacciSeries(i-1)+fibonacciSeries(i-2);
}
}