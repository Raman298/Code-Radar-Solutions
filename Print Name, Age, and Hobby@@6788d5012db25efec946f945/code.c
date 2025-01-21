#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],hobby[100];
    int age;
    scanf("%s %d %s",&str,&age,&hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s", welcome());
    return 0;
}