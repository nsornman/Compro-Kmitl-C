#include <stdio.h>

int main() {
    int h,i,j,n = 9;
    printf("input (1-20)  : ");
    scanf("%d", &h);
    if ( h <= 0 || h > 20){
        printf("\nNo Answer");
    }
    else{
        printf("\n");
        for (i = 1; i <= h; i++){
            for (j = 1; j <= h; j++){
                printf("  %d",n);
                n--;
                if (n == 0){
                    n = 9;
                }
            }
            printf("\n");
        }
    }
}