// Your code here...
void bubbleSort(int *arr,int n){
    int temp,p,c;
    for(p=0;p<n-1;p++){
       
        for(c=0;c<n-p-1;c++){
            if(arr[c]>arr[c+1]){
            temp=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=temp;
            }
        }
    }
}
void printArray(int *arr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}