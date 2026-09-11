#include <stdio.h>

//h = hight r = row
int main() {
    int h,i,j,k;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &h);
    if (h < 3){
        printf(" --- Incorrect number. ---");
        return 0;
    }
    else{
        printf("Output : \n");
        for (i = 1; i <= h; i++){
            for (j = 1; j <= h - i; j++){
                printf(" ");
            }
            for (k = 1; k <= (2 * i) - 1; k++){
                printf("*");
            }
            printf("\n");
        }
    }
    
}