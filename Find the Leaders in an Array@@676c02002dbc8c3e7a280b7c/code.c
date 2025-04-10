#include <stdio.h>

void leaderelements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int isLeader = 1; // Assume arr[i] is a leader initially
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isLeader = 0; // arr[i] is not a leader
                break;
            }
        }
        if (isLeader) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    leaderelements(arr, n);
    return 0;
}