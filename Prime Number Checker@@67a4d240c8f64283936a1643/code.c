// Your code here...
int main(){
    int j,i=2;
    scanf("%d",&j);
    int n;
    for(n=1;n<=j;n++){
        scanf("%d",&n);
    }
    if(n<1){
        printf("not valid input");
    }
    while(i<=(n/2)){
        if(n%i==0){
            printf("0");
        break;
        }
        i++;
    }
    if(i>(n/2)){
        printf("1");
    }
    return 0;
}