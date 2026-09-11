#include <stdio.h>

int main() {
    int num1, num2;
    printf(" *** Max-Min ***\n");
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("Max - Min = %d - %d = %d", num1,num2, num1-num2);
    }
    else {
        printf("Max - Min = %d - %d = %d", num2,num1, num2-num1);
    }
    return 0;
}