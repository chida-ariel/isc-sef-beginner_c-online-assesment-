#include<stdio.h>

#define MAX 100
typedef struct {
	int studentID;
	char name[50];
	char gender;
	int age;
	float gpa;
} Student;

void displayAll(Student *list, int count) {
	if (count ==0) {
		printf("No student records to display.\n");
		return;
	}

	printf("\n%-10s %-20s %-10s %-5s %-5s\n", "ID", "NAME", "Gender", "Age", "GPA");
	printf("----------------------------------------------------------\n");
	for (int i = 0; i < count; i++) {
		printf("%-10d %-20s %-10c %-5d %-5.2f\n",
				list[i].studentID,
				list[i].name,
				list[i].gender,
				list[i].age,
				list[i].gpa);
	}
}

		int main () {
			Student students[MAX];
			int studentCount = 0;
			int choice;

			while (1) {
				printf("\n----- MENU -----\n");
				printf("1. Add Student");
				printf("2. Display All students\n");
				printf("3. Exit\n");
				printf("Enter your choice:");
				scanf("%d", &choice);

				if (choice == 1) {
					addStudent(students, &studentCount);
				} else if (choice == 2) {
					displayAll(students, &studentCount);
				} else if (choice == 3) {
					printf("Exiting program.\n");
					break;
				} else {
					printf("Invalid choice. Try again.\n");
				}
			}
			return 0;
		}


