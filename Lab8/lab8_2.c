#include <stdio.h>

int main(){
int num[8][10] = {    2,    3,     5,     7,  11,  13,   17,   19,   29,  31, 

                      			  37,  41,   43,   37,  61,  71,   73,   79,   83,  97, 

                      			103, 107, 109, 113, 131, 151, 181, 191, 193, 173, 

                      			163, 113, 102, 107, 127, 137, 257, 139, 149, 369,

                      			212, 224, 236, 248, 313, 326, 339, 341, 355, 368,

                      		 	   2,    4,     6,     6,  10,   12,   14,   16,   18,  20, 

                      			   1,    3,     5,     7,    9,   11,   13,   17,   19,  21, 

                     			163, 113, 102, 107, 127, 137, 257, 139, 149, 369 };
    int in, i, j, k = 1, track = 0;

    printf(" *** Find a value in array 2 dimension ***\n");
    printf("Enter a value : ");
    scanf("%d", &in);
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 10; j++) {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }
    printf("\nFinding value => %d\n",in);
    for(i = 0; i <= 7; i++){
        for(j = 0; j <= 9; j++){
            if(num[i][j] == in){
                printf("%d. (row,column) => (%d,%d)\n", k++, i+1, j+1);
                track = 1;
            }
        }
    }
    if(track == 0){
        printf(" --- !!! NOT FOUND !!! ---");
    }
}