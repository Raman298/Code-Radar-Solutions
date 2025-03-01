// Your code here...
// #include<stdio.h>
// int main(){
//     int n;
    
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         char ch='A';
//         for(int j=1;j<=i;j++){
            
//             printf("%c ",ch++);   
//         }    
//     printf("\n");
// }
//     }

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}