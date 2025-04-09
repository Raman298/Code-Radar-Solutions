#include <stdio.h>

int smallelement(int arr[], int n) {
    if (n < 2) {
        return -1; // No second smallest if array has < 2 elements
    }

    int min = arr[0];
    int min2 = -1; // Initialize to an invalid value

    // Find the smallest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Find the second smallest (smallest > min)
    for (int i = 0; i < n; i++) {
        if (arr[i] > min) {
            if (min2 == -1 || arr[i] < min2) {
                min2 = arr[i];
            }
        }
    }

    return min2; // Returns -1 if all elements are the same
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