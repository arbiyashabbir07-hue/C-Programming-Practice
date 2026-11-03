#include <stdio.h>
#include<math.h>
 int main(){
    printf("%d\n",3>4 && 7>6);// AND Operator
    printf("%d\n",7<6 || 7>6); // OR Operator
    printf("%d\n",(!(3>4 || 4<3)));
    printf("%d\n",(!(3>4 && 7>6)));
    printf("%d", 3>4 != 4<3);// NOT Operator
    return 0;
}
