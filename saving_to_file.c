#include<stdio.h>
#include<string.h>

#define MAX 100
typedef struct {
	int studentID;
	char name[50];
	int age;
	char gender;
	float gpa;
} Student;
//function to save to file 
void saveToFile(Student *list, int count) {
	FILE *fp = fopen("students.txt", "w");
	if (fp == NULL) {
		printf("Error: could not open file for writing.\n");
		return;
	}
	fprintf(fp, "%-10s %-20s %-10s %-5s %-5s\n", "ID", "Name", "Gender", "Age", "GPA");
	fprintf(fp, "---------------------------------------------------------\n");

	for (int i = 0; i< count; i++) {
		fprintf(fp, "%-10d %-20s %-10c %-5d %-5.2f\n",
                                list[i].studentID,
                                list[i].name,
                                list[i].gender,
                                list[i].age,
                                list[i].gpa);
	}
	fclose(fp);
	printf("Records saved successfully to 'students.txt'\n");
}
//example use in main
int main() {
	Student students[100];
	int studentCount = 0;

	//add sample student manually for testing
	students[0].studentID = 1001;
	strcpy(students[0].name, "Paul");
	students[0].gender = 'M';
	students[0].age = 25;
	students[0].gpa = 3.27;
	studentCount++;

	//saveToFile(students, studentCount);
	
	return 0;
}
