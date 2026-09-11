#include <stdio.h>

int main() {
    float fah;
    float cel;
    printf(" *** Convert Fahrenheit to Celcius ***\n");
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f", &fah);
    cel = (5.0/9.0 * (fah - 32));
    printf("%.3f degree Fahrenheit equals %.3f degree celcius.", fah, cel);
    return 0;
}