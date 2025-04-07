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
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int original[n];
    for(int i=0;i<n;i++){
        int original[i]=arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
    if(original[i]==arr[i]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }}
    return 0;
}