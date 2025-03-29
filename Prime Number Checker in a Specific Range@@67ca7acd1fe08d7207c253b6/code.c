// Your code here...
#include<stdbool.h>
void printPrimesInRange(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(i<2)
        continue;
        bool isprime=true;
        int count=0;
        for(int j=3;j<=i/2;j++){
            if(i%j==0){  
                isprime=false;
                break;
            }
         count++;
        }
        if(isprime)
        printf("%d ",i); 
        
}
if(count<1)
printf("No prime numbers");
}