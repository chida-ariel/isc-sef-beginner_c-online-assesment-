#include<stdio.h>
#include<string.h>
reversingstring(char *str) {
	char *add = str;
	char *divide = str + strlen(str) - 1;
	char temp;
	while (add < divide) {
		//swap characters 
		temp = *add;
		*add = *divide;
		*divide = temp;

		// move pointers 
		add++;
		divide--;
	}
}
int main () {
	char str[50];
	printf("enter a string: ");
	scanf("%s", str); // reads string until space 
		reversingstring(str);
		printf("reversed string: %s\n", str);
		return 0;
}
			


