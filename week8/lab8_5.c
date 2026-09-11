// #include<stdio.h>
// #define SIZE 10

// int main() {
//     struct student {
//         char id[9];
//         char name[40];
//         int marking;
//     } st[SIZE];
//     int i, i_max, i_min, j = 0, temp;
//     float average = 0, sum = 0;
//     printf(" *** Structure Array 2 ***\n");
//     printf("Enter data : ");
//     for(i = 0; i < SIZE; i++) {
//         scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
//         sum += st[i].marking;
//     }
    
//     i_max = 0;
//     i_min = 0; 
//     for(i = 0; i < SIZE; i++) {
//         if(st[i].marking < st[i_min].marking) {
//             i_min = i;
//         }
//         if(st[i].marking > st[i_max].marking) {
//             i_max = i;
//             j = 0;
//         }
//         if(st[i].marking == st[i_max].marking){
//             j++;
//         }
//     }
//     printf("\n\n *** Analyzing Data ***\n");
//     printf("Max marking   = %d points, %d students.\n", st[i_max].marking, j);
//     j = 1;
//     for(i = 0; i < SIZE; i++){
//         if(st[i].marking == st[i_max].marking){
//             printf("%d. %s %s %d\n", j++, st[i].id, st[i].name, st[i].marking);
//         }
//     }

//     return 0;
// }
#include <stdio.h>
#define SIZE 10

int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];

    int i, max, count = 0, no = 1;
    float sum = 0;

    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");

    for(i = 0; i < SIZE; i++) {
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
        sum += st[i].marking;
    }

    max = st[0].marking;

    for(i = 0; i < SIZE; i++) {
        if(st[i].marking > max) {
            max = st[i].marking;
            count = 1;
        }
        else if(st[i].marking == max) {
            count++;
        }
    }

    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n", max, count);

    for(i = 0; i < SIZE; i++) {
        if(st[i].marking == max)
            printf("%d. %s %s %d\n",
                   no++, st[i].id, st[i].name, st[i].marking);
    }

    return 0;
}