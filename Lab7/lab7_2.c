#include<stdio.h>

int isPrime(int);

int main() {
    int a, b, max, min, i, count = 0;
    printf(" *** Prime number list *** \n");
    printf("Enter 2 positive numbers : ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf(" --- Incorrect input --- \n");
        return 0;
    }

    if (a > b) {
        max = a; min = b;
    } else {
        max = b; min = a;
    }

    for (i = min; i <= max; i++) {
        if (isPrime(i)) count++;
    }
    if (count > 0){
        printf("Total prime number%s : %d\n", count > 1 ? "s" : "", count);
        for (i = min; i <= max; i++) {
            if (isPrime(i)) printf("%d ", i);
        }
    }
    else{
        printf("NO prime number from %d to %d", min, max);
    }
    

    return 0;
}

int isPrime(int x) {
  	int i, count=0;
  	for (i=1;i<=x;i++)
      	if(x%i==0)
        count++;
  	if (count==2)
      	return 1;       
  	return 0; 
}


