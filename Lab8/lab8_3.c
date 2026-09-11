#include <stdio.h>

int main(){
    int num1, num2, ta[10] = {0}, max,min, i, j, digit, num;
    
    printf(" *** Digit counting ***\n");
    printf("Enter two counting numbers : ");
    scanf("%d %d",&num1,&num2);
    
    if(num1 < 0 || num2 < 0){
        printf("Invalid input !!!");
    }
    else{
        max = (num1 > num2) ? num1 : num2;
        min = (num1 < num2) ? num1 : num2;
        for(i = min; i <= max; i++){
           num = i;
            while (num > 0) {
                digit = num % 10;
                num = num / 10;
                ta[digit]++;
            }
        }
        printf("0 --> %d\n"
                "1 --> %d\n"
                "2 --> %d\n"
                "3 --> %d\n"
                "4 --> %d\n"
                "5 --> %d\n"
                "6 --> %d\n"
                "7 --> %d\n"
                "8 --> %d\n"
                "9 --> %d\n", ta[0],ta[1],ta[2],ta[3],ta[4],ta[5],ta[6],ta[7],ta[8],ta[9]);
    }
}