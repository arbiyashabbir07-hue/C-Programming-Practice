#include<stdio.h>
int main(){
    int signal;
    printf("Enter Signal:1.RED\n 2.YELLOW\n 3.GREEN\n");
    scanf("%d",&signal);
    switch(signal){
        case 1:
        printf("Red:Stop");
        break;
        case 2:
        printf("Yellow:walking");
        break;
        case 3:
        printf("Green:Go!");
        break;
        default:
        printf("Invalid Signal");
    }
    return 0;
}
