#include<stdio.h>
struct student {
	char name[50];
	int id;
	float score;
};

int main() {
	int n;
	// declare and initialize a struct variable
	struct student student[n];
	printf ("Enter number of students: ");
	scanf ("%d", &n);

	//input student data
	for (int i = 0; i < n; i++) {
	       printf ("Enter details for student %d:\n", i + 1);
       printf ("name:");
scanf("%s", student[i].name);
printf("id:");
scanf("%d", &student[i].id);
printf("score:");
scanf("%f", &student[i].score);
	}

	//display student data
	printf("student record\n");
	for (int i = 0; i < n; i++) {
		printf("student %d\n", i + 1);
		printf("name : %s\n", student[i].name);
		printf("id : %d\n", student[i].id);
		printf("score : %.2f\n", student[i].score);
	}
	return 0;
}


