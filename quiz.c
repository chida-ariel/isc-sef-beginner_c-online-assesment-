#include<stdio.h>
#include<math.h>
//declaration of function
int add(int n);
int subtract(int a, int b);
int multiply(int n);
int divide(float a, float b);
int square(int x);
int cube(int y);
int remain(int a, int b);

//declaring variable
int n;
int a,b;
int x;
int y;
//begining of main function
int main() {

	int a,b;
	int n;
	int x;
	int y;
	char (operator);
	printf("Enter an  operator (+,-,*,\%,/)");
	scanf("%c",&operator);

	printf("Enter first number:");
	scanf("%d",&a);

	printf("Enter second number:");
	scanf("%d",&b);

	if (operator == '+'){
		add(n);
	}
	else if (operator == '-'){
		subtract(a,b);
	}
	else if (operator == '*'){
		multiply(n);
	}
	else if (operator == '/'){
		divide(a,b);
	}
	else if (operator == '%'){
		remain(a,b);
	}
	return 0;
}

//definition of function
int add(int n){
	printf("the sum of %d and %d is: %d\n",a,b,a+b);
	return a+b;
}
int subtract(int a, int b){
	printf("the difference of %d and %d is: %d\n",a,b,a-b);
	return a-b;
}
int divide(float a, float b){
	printf("the divide of %.0f and %.0f is: %.3f\n",a,b,a/b);
	return (int)(a/b);
}
int multiply(int n){
	printf("the product of %d and %d is: %d\n",a,b,a*b);
	return a*b;
}
int square(int x){
	printf("the square of %d is: %d\n",x,x*x);
	return x*x;
}
int cube(int y){
	printf("the cube of %d is: %d\n",y,y*y*y);
	return y*y*y;
}
int remain(int a, int b){
	printf("the remainder of %d and %d is: %d\n",a,b,a%b);
	return (int)(a%b);
}
