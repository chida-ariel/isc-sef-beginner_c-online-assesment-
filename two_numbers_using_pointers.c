#include<stdio.h>
//Funtion to swap two numbers using pointers
swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int num1, num2;

	//Input two numbers 
	printf ("Enter two intergers:\n");
	scanf("%d %d", &num1, &num2);

	//print before swapping
	printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

	//call swap function 
	swap (&num1, &num2);

	//print after swapping
	printf ("After swapping: num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}
