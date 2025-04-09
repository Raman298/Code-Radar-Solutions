#include <stdio.h>

int smallelement(int arr[], int n) {
    int min = arr[0];  // Assume first element is the smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
    int min2=-1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min2&&arr[i]>min) {
            min2 = arr[i];  // Update min if a smaller element is found
        }
    }

    return min2;
}
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", smallelement(arr, n));
    return 0;
}