#include<stdio.h>
int main (){
    //program to find the smallest natural number among three numbers.
    // int a=20;
    // int b=30;
    // int c=10;
    int a,b,c;
    printf("Enter three numbers:\n");
     scanf("%d %d %d", &a, &b, &c);
    if(a<=b && a<=c){
        printf("The smallest natural number is a.");
    } 
    
    else if (b<=a && b<=c){
        printf("The smallest natural number is b.");

    }
    else{
        printf("The smallest natural number is c.");

    }
    return 0;
}
