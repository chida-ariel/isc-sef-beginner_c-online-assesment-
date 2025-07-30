#include<stdio.h>
int main() {
	int arr[4] = {2,4,6,8};
	int *ptr = arr; //Poniter to the first element of the array

	printf("Array elements using pointer arithmetic:\n");
	for (int i = 0; i < 4; i++) {
		printf("%d\n", *(ptr + i));
	}
	return 0;
}
