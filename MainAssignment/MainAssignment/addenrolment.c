#include <stdio.h>

struct enrolment
{
	char initial[20];
	int student_number;
	int course_number;
} e[10];

int add_enrolment() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;

	printf("Enter information of enrolment:\n");
	// storing enrolments
	for (i = 0; i < 1; ++i)
	{
		printf("Enter Course Number: ");
		scanf("%d", &e[i].course_number);

		printf("Enter Student Number: ");
		scanf("%d", &e[i].student_number);

		printf("\n");

		printf("E %d %d", e[i].course_number, e[i].student_number);
		printf("\n");
		fprintf(ptr_file, "E %d %d\n", e[i].course_number, e[i].student_number);
		fclose(ptr_file);

	}
}