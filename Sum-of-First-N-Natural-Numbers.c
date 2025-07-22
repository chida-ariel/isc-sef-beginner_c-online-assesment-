#include <stdio.h>

int main() {
	int sum, number;
       		printf("enter a natural number: \n");
	scanf("%d", &number);

       sum=number*(number+1)/2;	
	printf("sum of the first %d natural number is : %d\n", number, sum);

return 0;
}



