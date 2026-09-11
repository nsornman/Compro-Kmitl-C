#include <stdio.h>
#include <ctype.h>
int main() {
    char text[20];
    int count = 0, sum;
    printf("Enter your name : ");
    scanf("%s",text);
    while (text[count] != 0){
        count++;
        sum = count;
    }
    while (count > 0){
        count--;
        printf("%c\n", toupper(text[count]));
    }
    printf("Name length : %d", sum);
}