// Your code here...
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(i<2)
        continue;
        for(int j=2;j<=a/2;j++){
            if(i%j==0){  
                continue;
            }
          printf("%d ",i);  
        }
        
    }
}