#include <stdio.h>

int main() {
    int num, di = 2;
    printf("Enter number : ");
    scanf("%d", &num);
    if (num < 2){
        printf(":(");
    }
    else if (num == 2){
        printf("'%d' is a prime number!",num);
    }
    
    else {
       while (di < num) {
            if (num % di == 0){
                printf("'%d' is not a prime number!",num);
                break;
            }
            if (di == num - 1) {
                printf("'%d' is a prime number!", num);
            }
            di++;
        } 
    }
}