#include <stdio.h>

int main() {
    int num;
    printf("Enter 1 number : ");
    scanf("%d", &num);
    printf("The char of '%d' is %c", num, (char)num);
    return 0;
}