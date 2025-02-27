// Your code here...
#include<stdio.h>
int main(){
    int n;
    char ch="A";
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j++){
            printf("%c",ch)
        }
    }
}