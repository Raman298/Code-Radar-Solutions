// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if('a'<=ch<='z'||'A'<=ch<='Z'){
        printf("consonent");
    }
    else if(ch='a','e','i','o','u'|'A','E','I','O','U'){
        printf("Vowel");
    }
    else if(1<=ch<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}