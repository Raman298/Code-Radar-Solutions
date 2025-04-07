#include <stdio.h>
int main(){
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
      } int max=arr[0];
      int max2=-1;
      for(int i=0; i<n; i++){
            if(arr[i]>max){
                  max=arr[i];
      }}
       for(int i=0; i<n; i++){
            if(arr[i]!=max && arr[i]>max2){
                max2=arr[i];
      }
      }
printf("%d",max2);
return -1;
}