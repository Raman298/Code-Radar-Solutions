#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a=b=c)
    printf("Equilateral");
    else if (a=b&&b=c&&c!=a||a!=b&&b=c&&c=a||b!=c&&a=b&&a=c)
    printf("Isoscales");
    else
    printf("Scalene")
    return 0;
}