#include <stdio.h>

int main() {
    int num, temp, div, digit, sum , first;

    printf(" *** Summation of each digit into one digit ***\n");
    printf("Enter a positive number : ");
    scanf("%d", &num);

    printf("%d => ", num);

    while (num >= 10) {
        temp = num;
        div = 1;
        sum = 0;
        first = 1;

        while (temp >= 10) {
            temp /= 10;
            div *= 10;
        }

        while (div > 0) {
            digit = num / div;

            if (!first)
                printf(" + ");

            printf("%d", digit);

            sum += digit;
            num %= div;
            div /= 10;
            first = 0;
        }

        printf(" = %d", sum);

        num = sum;

        if (num >= 10)
            printf(" => ");
    }

    printf("\n");
    return 0;
     
}