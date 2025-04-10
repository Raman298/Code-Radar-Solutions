// #include <stdio.h>
// int max2(int arr[],int n){
//     int max=arr[0];
//       int max2=arr[0];
//       for(int i=0; i<n; i++){
//             if(arr[i]>max){
//                   max=arr[i];
//       }}
//        for(int i=0; i<n; i++){
//             if(arr[i]!=max && arr[i]>max2){
//                 max2=arr[i];
//       }
//       }
//       if(max2<max){
// return max2;}
// return -1;
// }
// int main(){
//       int n;
//       scanf("%d",&n);
//       int arr[n];
//       for(int i=0; i<n; i++){
//             scanf("%d",&arr[i]);
//       }
//       printf("%d",max2(arr,n));
// }


// #include <stdio.h>
// #include <limits.h>  // For INT_MIN

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
    
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     if (n < 2) {
//         printf("Array must have at least 2 elements\n");
//         return 1;
//     }
    
//     int max = arr[0];
//     int max2 = INT_MIN;  // Smallest possible integer
    
//     // First pass to find max
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
    
//     // Second pass to find max2
//     for(int i = 0; i < n; i++) {
//         if(arr[i] != max && arr[i] > max2) {
//             max2 = arr[i];
//         }
//     }
    
//     // If all elements are equal (max2 wasn't updated)
//     if (max2 == INT_MIN) {
//         max2 = max;  // Or handle differently if needed
//     }
    
//     printf("%d", max2);
//     return 0;
// }



#include <stdio.h>
#include <limits.h> // For INT_MIN

int max2(int arr[], int n) {
    if (n < 2) {
        return -1; // Edge case: Not enough elements
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max; // The old max becomes the new secondMax
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    // If secondMax is still INT_MIN, all elements were equal (or invalid)
    return (secondMax != INT_MIN) ? secondMax : -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", max2(arr, n));
    return 0;
}