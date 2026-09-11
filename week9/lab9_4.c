#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palindrome(char *str){
    char *pt1 = str;
    char *pt2 = str + strlen(str) - 1;
    while(pt1 < pt2){
        if(!isalnum(*pt1)){
            pt1++;
        } 
        else if(!isalnum(*pt2)){
            pt2--;
        } 
        else {
            if(tolower(*pt1) != tolower(*pt2)){
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
    char str[100];
    printf(" ***  Palindrome Verification  ***\n");
    printf(" *  verify only alphabet number  *\n");
    printf(" *        insensitive case       *\n");
    printf(" *-------------------------------*\n");
    printf("Enter a sentence : ");
    scanf("%[^\n]",str);
    printf("Entered message : %s\n",str);
    palindrome(str);
	return 0;
}