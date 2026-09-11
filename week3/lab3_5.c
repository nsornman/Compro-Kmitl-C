#include <stdio.h>

int main() {
    int num;
    printf("Enter lottery number : ");
    scanf("%d", &num);
    printf("Jackpot	: %d\n", num);
    printf("+1	: %d\n", num+1);
    printf("-1	: %d\n", num-1);
    printf("First 3	: %d\n", num/1000);
    printf("Last 3	: %d\n", num%1000);
    return 0;
}