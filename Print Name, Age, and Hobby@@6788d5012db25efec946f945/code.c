#include <stdio.h>
int main() {
    char str[100];
    int age;
    char hobby[100];
    scanf("%s %d %s",&str,&age,&hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s",str,age,hobby);
    return 0;
}