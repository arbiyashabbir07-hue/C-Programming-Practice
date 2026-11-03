//(a)If it`s Sunday and Snowing. TRUE:1
//(b)If it`s Monday or Raining. TRUE:1
//(c) If a number is greater than 9 and less than 100. TRUE:1
#include <stdio.h>
int main(){

     //(a)If it`s Sunday and Snowing. TRUE:1
    //  int sun;
    //  int snow;
    //  printf("%d\n", sun && snow);




     // (b)If it`s Monday or Raining. TRUE:1
    //    int mon;
    //    int rain;
    //    printf("%d\n", mon || rain);
    

        //(c) If a number is greater than 9 and less than 100. TRUE:1
 int num;
  printf("Enter  Number:\n");
  scanf("%d", &num);
  printf("%d\n", 9<num && num<100);
  return 0;
}

