#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;

    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Output : ");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i ; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}