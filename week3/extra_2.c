#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("PLease Enter your sentence : ");
    scanf("%[^\n]", str);
    printf("Original Text : %s\n", str);
    printf("Length of the string : %zu\n", strlen(str));
    printf("Last 3 Characters : %s\n", str + strlen(str) - 3);
    printf("First 3 Characters : %.3s\n", str);
    return 0;
}