// Your code here...
int binarySearch(int arr[],int n,int targert){
    int low=0;
    int high=n-1;
    while(low<high){
        int mid=(low+(high-low)/2);
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            low=mid-1;
        }
    }
}