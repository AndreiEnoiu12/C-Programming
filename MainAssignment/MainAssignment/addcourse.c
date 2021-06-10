#include <stdio.h>

struct course
{
	char initial[20];
	char course_name[20];
	int course_number;
	int semester_number;
} c[10];

int add_course() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;

	printf("Enter information of course:\n");
	// storing course
	for (i = 0; i < 1; ++i)
	{
		printf("Enter Course Name: ");
		scanf("%s", c[i].course_name);

		printf("Enter Course Number: ");
		scanf("%d", &c[i].course_number);

		printf("Enter Semester Number: ");
		scanf("%d", &c[i].semester_number);

		printf("\n");

		printf("C %s %d %d", c[i].course_name, c[i].course_number, c[i].semester_number);
		printf("\n");
		fprintf(ptr_file, "C %s %d %d\n", c[i].course_name, c[i].course_number, c[i].semester_number);
		fclose(ptr_file);

	}
}