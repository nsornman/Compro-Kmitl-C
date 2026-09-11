#include <stdio.h>

int main() {
    long num;
    int last3,first3,mid3,first;
    printf(" *** Display integer in different styles ***\n");
    printf("Enter an integer : ");
    scanf("%ld", &num);
    last3 = num%1000;
    mid3 = (num/1000)%1000;
    first3 = (num/1000000)%1000;
    first = num/1000000000;

    printf("Original number : %ld\n", num);
    printf("last 3 digits : %d\n", last3); 
    printf("next 3 digits : %d\n", mid3);
    printf("next 3 digits : %d\n", first3);
    printf("next 3 digits : %d\n", first);
    printf("comma format : %d,%d,%d,%d", first, first3, mid3 , last3);
    return 0;
}