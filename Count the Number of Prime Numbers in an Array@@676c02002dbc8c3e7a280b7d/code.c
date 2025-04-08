#include<stdio.h>
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i<n/2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countprime(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result =countprime(arr,n);
    printf("%d",result);
}