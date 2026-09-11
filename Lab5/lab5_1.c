#include <stdio.h>

int main() {
    int num1, num2, count = 1, max, min, sum = 0, hd, th;
    printf(" *** Sequence summation ***\n");
    printf("Enter start end : ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    min = (num1 < num2) ? num1 : num2;
    if (num1 != num2){
        while (min <= max) {
            sum += min;
            if (min == max){
                if (sum / 1000 > 0){
                    th = sum / 1000;
                    hd = sum % 1000;
                    printf("%d = %d,%03d", min, th, hd);
                }
                else{
                    printf("%d = %d", min, sum);  
                }   
            }
            else{
                printf("%d + ", min);
            }
            min++;
        }
        
    }
    else{
        if (num1 / 1000 > 0){
            th = num1 / 1000;
            hd = num1 % 1000;
            printf("%d = %d,%03d", num1, th, hd);
        }
        else{
            printf("%d = %d", num1,num2);
        }
    }
}