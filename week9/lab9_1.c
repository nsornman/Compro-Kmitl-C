#include <stdio.h>

void remove_money_from_wallet(int *wallet, int amount){
    *wallet -= amount;
}
int main() {
    int wallet = 20, amount;
    printf("Enter money : ");
    scanf("%d", &amount);
    remove_money_from_wallet(&wallet, amount);
    printf("My wallet -> %d", wallet);
}