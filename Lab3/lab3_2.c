#include <stdio.h>

int main() {
    int num;
    printf(" *** Show a number in variety formats. ***\n");
    printf("Enter integer : ");
    scanf("%d", &num);
    printf("Int	-> %d\n", num);
    printf("Float	-> %.2f\n", num*1.0);
    printf("Int/3	-> %.3f\n", num/3.0);
    printf("Int^2	-> %d\n", num*num);
    return 0;
}