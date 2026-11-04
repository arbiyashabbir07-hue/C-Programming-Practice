#include<stdio.h>
int main(){
     int a,b,c;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d", &a,&b,&c);
    float average= (a+b+c)/3;
    printf("Average is:%.2f", average);
    return 0;
}
