#include <stdio.h>

int main() {
    // int h,i,j,k,n;
    // printf("Enter a number (1-16) : ");
    // scanf("%d", &h);
    // if (h < 1 || h > 16){
    //     printf("Out of range ! ! !");
    // }
    // else{
    //     n = h;
    //     for (i = 1; i <= n; i++){
    //         printf("%X",h--);
    //     }
    //     for (j = 1; j <= n-2; j++){
    //         printf("\n%X",n);
    //         for (k = 1; k <= n-2; k++){
    //             printf(" ");
    //         }
    //         printf("1");
    //     }
    //     h = n;
    //     printf("\n");
    //     for (i = 1; i <= n; i++){
    //         printf("%X",h--);
    //     }
    // }
        int h, i, j, k;

    printf("Enter a number (1-16) : ");
    scanf("%d", &h);

    if (h < 1 || h > 16) {
        printf("Out of range ! ! !");
    } else {

        for (j = 0; j <= 1; j++) {          // พิมพ์บรรทัดแรกและบรรทัดสุดท้าย
            for (i = h; i >= 1; i--)
                printf("%X", i);

            if (j == 0){                    // หลังบรรทัดแรกค่อยพิมพ์ส่วนกลาง
                for (i = 1; i <= h - 2; i++) {
                    printf("\n%X", h);
                        for (k = 1; k <= h - 2; k++){
                            printf(" ");
                        }
                    printf("1");
                }
                if (j == 0){
                    printf("\n");
                }
            }
        }
    }

    return 0;
}