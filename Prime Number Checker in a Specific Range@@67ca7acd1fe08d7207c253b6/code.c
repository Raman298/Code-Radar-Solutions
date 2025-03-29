// Your code here...
#include<stdbool.h>
void printPrimesInRange(int a,int b){
    int i;int count=0;
    for(i=a;i<=b;i++){
        if(i<2)
        continue;
        bool isprime=true;
        
        for(int j=3;j<=i/2;j++){
            if(i%j==0){  
                isprime=false;
                break;
            }
         count++;
        }
        if(isprime)
        printf("%d ",i);
        else{
            printf("No prime number");
        } 
        
}
if(count<1)
printf("No prime numbers");
}