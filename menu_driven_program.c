#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

struct student {
	int studentID;
	char name[50];
	int age;
	char gender;
	float gpa;
};
struct student students[MAX];
int count = 0;

//function to add a student
void addstudent() {
	if (count >= MAX) {
		printf("Maximum student limit reached.\n");
		return 0;
	}

	printf("Enter student ID:");
	scanf("%d", &students[count].studentID);
	printf("Enter name:");
	scanf("%s", &students[count].studentID);
	printf("Enter gender (M/F):");
	scanf("%s", &students[count].studentID);
	printf("Enter age:");
	scanf("%d", &students[count].studentID);
	printf("Enter gpa:");
	scanf("%.2f", &students[count].studentID);

	count++;
	printf("students added successfully");
}

//function to display all student records
void displayALL() {
	 if (count == 0) {
		 printf("No records to display.\n");
		 return;
	 }
	 for (int i = 0; i < count; i++) {
			 printf("\n---student %d ---\n", i+1);
			 printf("ID: %d\n", students[i].studentID);
			 printf("Name: %s\n", students[i].name);
			 printf("Gender: %c\n", students[i].gender);
			 printf("Age: %d\n", students[i].age);
			 printf("GPA: %.2f", students[i].gpa);
		 }
	 }
		 //function to search a student by ID
		 void searchByID() {
			 int id, found = 0;
			 printf("Enter student ID to search:");
			 scanf("%d", &id);

			 for (int i = 0; i < count; i++); {
			 if (students[id].studentID == id) {
				 printf("\nstudent Found:\n");
				 printf("ID: %d\n", students[id].studentID);
				 printf("Name: %s\n", students[i].name);
                                 printf("Gender: %c\n", students[i].gender);
                                 printf("Age: %d\n", students[i].age);
                                 printf("GPA: %.2f", students[i].gpa);
				 found = 1;
			 }
			 }
			 if (!found);
				 printf("student with ID %d not found.\n", id);
		 }
//function to save records to file 
void loadFromFile() {
FILE *fp = fopen("students.txt", "r");
if (!fp) {
	printf("No file found to load.\n");
	return;
}
count = 0;
while (fscanf(fp, "%d,%49[^,],%c,%d,%f\n",
			&students[count].studentID,
			&students[count].name,
			&students[count].gender,
			&students[count].age,
			&students[count].gpa) == 5) {
	count++;
		if (count >= MAX) break;
}
fclose(fp);
printf("Records loaded from files successfully.\n");
}
int main() {
	int choice;
	do {
		printf("\n----- Student Record Menu -----\n");
		printf("1. Add student record\n");
		printf("2. Display all records\n");
		printf("3. Search by ID\n");
		printf("4. Save to file\n");
		printf("5. Load from file\n");
		printf("6: Exit\n");
		printf("Enter your choice:");
		scanf("d", &choice);

		switch (choice) {
			case 1: addstudent(); break;
			case 2: displayAll(); break;
			case 3: searchByID(); break;
			case 4: saveToFile(); break;
			case 5: LoadFromFile(); break;
			case 6: printf("Exiting prgram.\n"); break;
			default: printf("Invalid choice. Try again.\n");
		}
	} while (choice != 6);

	return 0;
}



	
