// Your code here...
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        for(int j=2;j<=a/2;j++){
            if(a%j==0){
                printf("%d ",a);
                break;
            }
        }
    }
}