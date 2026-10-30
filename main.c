#include <stdio.h>
#include <string.h>

int palindrome(char *str){
    char *p1 = str, *p2 = str + strlen(str) - 1;

    while(p1 < p2){
        if(*p1 != *p2){
            return 0;
        }
        p1++;
        p2--;
    }
    return 1;
}

int main(){
    char str[50];

    printf("Enter a string: ");
    scanf("%49s", str);

    if(palindrome(str)){
        printf("%s is a palindrome.\n", str);
    }
    else{
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}