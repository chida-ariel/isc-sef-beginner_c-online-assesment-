#include<stdio.h>

typedef struct {
	int studentID;
	char name[50];
	char gender;
	int age;
	float gpa;
} student;

int main() {
	student student1 = {1002,"Chida",'M',14,3.9};
        
	printf("StudentID:%d\n", student1.studentID);
	printf("Name: %s\n", student1.name);
       printf("age:%d\n", student1.age);
printf("gender:%s\n", student1.gender);
printf("gpa:%.2f\n", student1.gpa);

return 0;
}

