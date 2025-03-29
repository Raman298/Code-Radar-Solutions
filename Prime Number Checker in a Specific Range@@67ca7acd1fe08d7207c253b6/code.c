// Your code here...
#include<stdbool.h>
void printPrimesInRange(int a,int b){
    int i;int count=0;
    bool foundbool=false;
    for(i=a;i<=b;i++){
        if(i<2)
        continue;
        bool isprime=true;
        
        for(int j=2;j<=i/2;j++){
            if(i%j==0){  
                isprime=false;
                break;
            }
         count++;
        }
        if(isprime){
        printf("%d ",i);
        foundbool=true;
        }      
}
if(!foundbool)
printf("No prime numbers");
}