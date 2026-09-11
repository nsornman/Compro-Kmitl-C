#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check(char *str, char pt1, char pt2){
    while(pt1 < pt2){
        if(!isalnum(str[pt1])){
            pt1++;
        } 
        else if(!isalnum(str[pt2])){
            pt2--;
        } 
        else {
            if(tolower(str[pt1]) != tolower(str[pt2])){
                printf("\"\%s\" is NOT palindrom.", str);
                return;
            }
            pt1++;
            pt2--;
        }
    }
    printf("\"\%s\" is PALINDROME.", str);
}

int main() {
    char str[100], pt1, pt2;
    printf(" *** Palindrome Verification ***\n");
    printf("Enter a sentence : ");
    scanf(" %[^\n]", str);
    pt1 = 0;
    pt2 = strlen(str) - 1;
    check(str, pt1, pt2);

}