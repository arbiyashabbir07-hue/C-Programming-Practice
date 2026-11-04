#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:\n");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("Enter character:\n"); //(ch>='48' && ch<='57')
      //we have taken the values from 0-9 only bcoz we have to find out single digit not digits ascaii values(48-57)
      
        printf("it is a digit");

    }
    else{
        printf("it is not a digit");

    }
    return 0;
}

// CAPITAL; A-Z: 65-90.
//small; a-z : 97-122.
//Digit; '0'-'9' : 48-57.



 // '5' charcter representing digit 5 : (representing code 53 on  ASCII systems)
 //  5  Integer number 5 : (numeric value is 5)
