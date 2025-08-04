#include<stdio.h>
#include<string.h>

#define MAX 100

typedef struct {
	int studentID;
	char name[50];
	char gender;
	int age;
	float gpa;
} student;

void addstudent (student *list, int *count){
	if (*count >= MAX) {
		printf("Maximum number of students reached.\n");
		return;
	}
	student *s = &list[*count];
	printf("Enter student ID:");
	scanf("%d", &s -> studentID);

	printf("Enter name :");
	getchar();
	fgets(s->name, sizeof(s->name), stdin);
	s->name[strcspn(s->name, "\n")] = '\0'; //remove new line 
						
	printf("Enter gender (M/F):");
	scanf("%c", &s->gender);

	printf("Enter age:");
	scanf("%d", &s->age);

	printf("Enter gpa:");
	scanf("%f", &s->gpa);
	(*count)++;
	printf("student added successfully!\n");
}

int main() {
	student studentList[MAX];
	int studentCount = 0;
	addstudent(studentList, &studentCount); //could be called repeatedly in a loop
						return 0;
}
