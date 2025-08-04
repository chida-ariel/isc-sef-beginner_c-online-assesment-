#include<stdio.h>

typedef struct {
	int studentID;
	int age;
	float gpa;
	char gender;
	char name[50];
} Student;
//defining function
Student* searchByID(Student *list, int count, int id) {
	for (int i = 0; i < count; i++) {
		if (list[i].studentID == id) {
			return &list[i]; //return pointer to matching student 
			}
	}
	return NULL; // not found
}

int main() {
	Student students[100];
	int studentCount = 0;
	// example add few students
	int idToSearch;
	printf("Enter ID to search:");
	scanf("%d", &idToSearch);

	Student *found = searchByID(students, studentCount,idToSearch);
	if (found != NULL) {
		printf("\nStudent Found:\n");
		printf("ID: %d\n", found -> studentID);
		printf("Name: %s\n", found -> name);
		printf("Gender: %c\n", found -> gender);
		printf("Age: %d\n", found -> age);
		printf("Gpa: %.2f\n", found -> gpa);
	} else {
		printf ("Student with ID %d not found.\n", idToSearch);
	}
	return 0;
}
