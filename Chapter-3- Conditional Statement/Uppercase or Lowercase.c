#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase,\n");
        printf("CAPITAL LETTER.\n");
    }
    else if (ch>='a'&& ch<='b'){
        printf("Lowercase,\n");
        printf("small letter.\n");

    }
    else{
        printf("Not an english letter");
    }
    return 0;
}
