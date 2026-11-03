#include<stdio.h>
#include<math.h>  // To perform several Arithmetic Operations i.e(+,-,*,%,/)
int main(){
    printf("%d\n",2*2);
    printf("%d\n", 16%10); //Modulus operator used to find out thr remaindr
    printf("%d\n",5*25/4 );// sacnning from left to right.(same precedence)
    printf("%d\n", 5*2-2*3);// (*>-)
    printf("%d\n", 5*2/2*3); //Same precedence left to right scanning.
    printf("%d\n", 5+2/2*3);//  multiplication and divison and same preference 
    // scanning is done from left to right.
     return 0;
    }
