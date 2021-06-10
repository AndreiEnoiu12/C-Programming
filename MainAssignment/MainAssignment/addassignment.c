#include <stdio.h>

struct assignment
{
	char initial[20];
	int teacher_number;
	int course_number;
} a[10];

int add_assignment() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;

	printf("Enter information of assignment:\n");
	// storing assignments
	for (i = 0; i < 1; ++i)
	{
		printf("Enter Course Number: ");
		scanf("%d", &a[i].course_number);

		printf("Enter Teacher Number: ");
		scanf("%d", &a[i].teacher_number);

		printf("\n");

		printf("A %d %d", a[i].course_number, a[i].teacher_number);
		printf("\n");
		fprintf(ptr_file, "A %d %d\n", a[i].course_number, a[i].teacher_number);
		fclose(ptr_file);

	}
}