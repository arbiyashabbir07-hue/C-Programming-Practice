#include<stdio.h>
int main () {
    int number;
     printf("Enter Number:\n");
     scanf("%d",&number);
    //printf("answer:%d\n", number%2==0);      [simple program just to check wether the no is divisble by 2 ]
    //OUTPUT: either[1,0].
    if(number%2==0){
        printf("The number is DIVISIBLE by 2.\n");
        printf("The number is EVEN.\n");
    } 
    else{
        printf("The number is  not DIVISIBLE by 2.\n");
        printf("The number is ODD.\n");
    }   

return 0;
}
