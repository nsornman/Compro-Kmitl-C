#include<stdio.h>

#define findmin(x,y) ((x) < (y) ? (x) : (y))

int main() {
  	int a,b,c,d;
  	printf(" *** Find min value of 4 inputs ***\n");
   	printf("Enter 4 integers : ");
  	scanf("%d %d %d %d",&a,&b,&c,&d);
  	printf("The minimum number is %d\n",findmin(findmin(a,b),findmin(c,d)));
	return 0;
}