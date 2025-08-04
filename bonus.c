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

void deleteByID(Student *list, int *count, int id) {
	int found = 0;

	for (int i = 0; i < *count; i ++) {
		if  ((list + i)->studentID == id) {
			found = 1;

			//shift elements to the left using pointer arithmetic
		for (int j = i; j < *count - 1; j++) {
			*(list + j) = *(list + j + 1);
		}

		(*count)--; // decrease the total count
		printf("Student with ID %d deleted successfully.\n", id);
		break;
		}
	}
	if  (!found) {
		printf("Student with ID %d not found.\n", id);
	}
}

int main() {
	Student students[100];
	int studentCount = 0;

	//assume you've alreadyadded or loaded students
	int idToDelet;
	printf("Enter student ID to delete:");
	scanf("%d", &idToDelet);

	deleteByID(students, &studentCount, idToDelet);
	return 0;
}
