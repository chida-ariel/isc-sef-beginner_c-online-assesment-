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
//function to load student record from file 
void loadFromFile(Student *list, int *count) {
        FILE *fp = fopen("students.txt", "r");

        if (fp == NULL) {
                printf("Error: could not open file 'student.txt' for reading.\n");
                return;
        }

	char line[200];
	int tempID, tempAge;
	char tempName[50], tempGender;
	float tempGPA;

	*count = 0; //reset the count before loading

	//skip header lines
	fgets(line, sizeof(line), fp); //skip first line(titles)
	fgets(line, sizeof(line), fp); //skipsecond line (daches)

	//read each student record using fscanf
	while (fscanf(fp, "%d %s %c %d %f",
				&tempID, tempName, &tempGender, &tempAge, &tempGPA) ==5) {
		list[*count].studentID = tempID;
		strcpy(list[*count].name, tempName);
		list[*count].gender = tempGender;
		list[*count].age = tempAge;
		list[*count].gpa =tempGPA;

		(*count)++;
		if (*count >= MAX) break; //prevent overflow
	}
	fclose(fp);
	printf("Loaded %d record(s) from'students.txt'.\n", *count);
}
int main() {
	Student students[MAX];
	int studentCount = 0;

	//load from file at start
	loadFromFile(students, &studentCount);

	// you can now display or manipulate the loaded records
	return 0;
}
