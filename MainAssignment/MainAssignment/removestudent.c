#include <stdio.h>

struct student
{
	char initial[20];
	char first_name[20];
	int student_number;
} s[10];

int remove_student() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;
	int k;
	char l;
	printf("Enter information of student to remove:\n");
	// storing student
	printf("Enter Student Name: ");
	scanf("%s", &l);

	printf("Enter Student Number: ");
	scanf("%d", &k);

	printf("\n");

	for (i = 0; i < 3; ++i)
	{
		if (s[i].first_name != &l && s[i].student_number != k) {
			printf("S %s %d", s[i].first_name, s[i].student_number);
			printf("\n");
			fprintf(ptr_file, "S %s %d\n", s[i].first_name, s[i].student_number);
		}
		fclose(ptr_file);

	}
}