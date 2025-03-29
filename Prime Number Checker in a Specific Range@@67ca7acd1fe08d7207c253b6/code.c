// Your code here...
void printPrimesInRange(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(i<2)
        break;
        for(int j=3;j<=i/2;j++){
            if(i%j==0){  
                break;
            }
         printf("%d ",i);   
        }
        
    }
}