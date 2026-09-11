#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int count = 0;
    printf(" *** To Upper Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]", text);
    while (text[count] != '\0') {
        text[count] = toupper(text[count]);
        count++;
    }
    printf("Output : %s", text);
    return 0;
}