#include <stdio.h>

int main() {
    int num, money = 0;
    printf(" *** Lottery ***\n");
    printf("Ticket Number : ");
    scanf("%d", &num);
    if (num / 1000 == 367 || num / 1000 == 653){
        money += 4000;
        printf("You Won! [The first three digits]\n");
    }
    if (num % 1000 == 566 || num % 1000 == 878){
        money += 4000;
        printf("You Won! [The last three digits]\n");
    }
    if (num % 100 == 15){
        money += 2000;
        printf("You Won! [The last two digits]\n");
    }
    if (money > 0){
        printf("You get %d Baht.", money);
    }
    if (money == 0) {
        printf("Sorry, you didn't win this time.");
    }
    
    return 0;
}