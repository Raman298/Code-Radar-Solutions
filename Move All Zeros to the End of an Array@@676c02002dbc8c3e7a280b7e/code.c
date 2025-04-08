#include<stdio.h>
void move_zeros_to_end(int arr[], int n) {
    int non_zero_ptr = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[non_zero_ptr++] = arr[i];
        }
    }
  
    while (non_zero_ptr < n) {
        arr[non_zero_ptr++] = 0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    move_zeros_to_end(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}