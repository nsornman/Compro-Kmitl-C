#include <stdio.h>

int main() {
    int num1, num2, num3, ans;
    printf("Enter 3 Number : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    ans = num1 + num2 + num3;
    printf("ANSWER = %d\n", ans);
    if (ans < 10 || (ans / 10) % 2 == 0){
        printf("EVEN\n");
    }
    else {
        printf("ODD\n");
    }
    return 0;
}