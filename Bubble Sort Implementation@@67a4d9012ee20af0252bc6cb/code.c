// Your code here...
int bubbleSort(int arr,int n){
    for(int p=0;p<n-1;p++){
        for(int c=0;c<n-p-1;c++){
            int temp=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=temp;
        }
    }
}
int printArray(int arr,int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}