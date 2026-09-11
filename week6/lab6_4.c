#include <stdio.h>

int main() {
    int i,j,k,h;
    char ch;
    printf("Enter : ");
    scanf("%d",&h);
    for (i = 0; i < h; i++){
        for (j = 0; j < h; j++){
            ch = 'A' + (i+j)%h;
            printf("%c",ch);
        }
        printf("\n");
    }
}