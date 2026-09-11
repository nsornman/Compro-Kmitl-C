#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int count = 0, sum = 0;  
    printf(" *** Summation of ASCII code ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", text);
    int len = strlen(text);
    printf("String length : %d\n", len);
    printf("output : ");
    while (text[count] != '\0'){
        text[count] = (int)text[count];
        sum += text[count];
        if (count == 0){
            printf("%d  + ", text[count]);
        }
        else if (count == len - 1){
            printf("%d", text[count]);
        }
        else{
            printf("%d + ", text[count]);
        }
        count++;
    }
    printf(" = %d", sum);
}