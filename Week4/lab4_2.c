#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf(" *** Find (Minimum + Maximum) / Maximum ***\n");
    printf("Enter 3 integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    printf("(Min + Max) / Max = (%d + %d) / %d = %.5f", min, max, max, (min + max) * 1.0 / max);
    return 0;
}