#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    int age;
    char hobby[100];
    scanf("%s %d %s",&str,&age,&hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s", welcome());
    return 0;
}