#include <stdio.h>

struct student
{
	char initial[20];
	char first_name[20];
	int student_number;
} s[10];

int add_student() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;

	printf("Enter information of student:\n");
	// storing student
	for (i = 0; i < 1; ++i)
	{
		printf("Enter Student Name: ");
		scanf("%s", s[i].first_name);

		printf("Enter Student Number: ");
		scanf("%d", &s[i].student_number);

		printf("\n");

		printf("S %s %d", s[i].first_name, s[i].student_number);
		printf("\n");
		fprintf(ptr_file, "S %s %d\n", s[i].first_name, s[i].student_number);
		fclose(ptr_file);

	}
}