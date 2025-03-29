// Your code here...
int selectionSort(;nt arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("%d ",arr[]);
}