// Your code here...
int main(){
        int n;
        scanf("%d",&n);
        for(int i=1;i<n;i++){
            // for(int z=1;z<=n-i;z++){
            //     printf(" ");
            // }
            for(int j=1;j<=i;j++){
                if(j<=n-1)
                printf(" ");
                else
                printf("*");
            }
            printf("\n");
        }
    }
    