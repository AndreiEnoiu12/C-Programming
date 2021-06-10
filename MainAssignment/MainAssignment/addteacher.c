#include <stdio.h>

struct teacher
{
	char initial[20];
	char first_name[20];
	int teacher_number;
} t[10];

int add_teacher() {

	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "a");
	if (!ptr_file)
		return 1;

	printf("Enter information of teacher:\n");
	// storing teacher
	for (i = 0; i < 1; ++i)
	{
		printf("Enter Teacher Name: ");
		scanf("%s", t[i].first_name);

		printf("Enter Teacher Number: ");
		scanf("%d", &t[i].teacher_number);

		printf("\n");

		printf("T %s %d", t[i].first_name, t[i].teacher_number);
		printf("\n");
		fprintf(ptr_file, "T %s %d\n", t[i].first_name, t[i].teacher_number);
		fclose(ptr_file);

	}
}