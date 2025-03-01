// Your code here...
#include<stdio.h>
int main(){
    int n;
    char ch='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            for(char ch='A';ch<='Z',ch++){
            printf("%c ",ch);
            ch++;
            }

        }
        
    printf("\n");
}
    }