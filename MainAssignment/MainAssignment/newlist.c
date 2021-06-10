#include<stdio.h>

struct student
{
	char initial[20];
	char first_name[20];
	int student_number;
} s[10];

struct teacher
{
	char first_name[20];
	int teacher_number;
} t[10];

struct course
{
	char initial[20];
	char course_name[20];
	int course_number;
	int semester_number;
} c[10];

struct enrolment
{
	char initial[20];
	int student_number;
	int course_number;
} e[10];

struct assignment
{
	char initial[20];
	int teacher_number;
	int course_number;
} a[10];

int new_list()
{
	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "w");
	if (!ptr_file)
		return 1;

	printf("Enter information of students:\n");
	// storing student
	for (i = 0; i < 3; ++i)
	{
		printf("Enter Student Name: ");
		scanf("%s", s[i].first_name);

		printf("Enter Student Number: ");
		scanf("%d", &s[i].student_number);

		printf("\n");
	}

	printf("Enter information of teachers:\n");
	// storing teacher
	for (i = 0; i < 3; ++i)
	{
		printf("Enter Teacher Name: ");
		scanf("%s", t[i].first_name);

		printf("Enter Teacher Number: ");
		scanf("%d", &t[i].teacher_number);

		printf("\n");
	}

	printf("Enter information of courses:\n");
	// storing course
	for (i = 0; i < 3; ++i)
	{
		printf("Enter Course Name: ");
		scanf("%s", c[i].course_name);

		printf("Enter Course Number: ");
		scanf("%d", &c[i].course_number);

		printf("Enter Semester Number: ");
		scanf("%d", &c[i].semester_number);

		printf("\n");
	}

	printf("Enter information of enrolments:\n");
	// storing enrolments
	for (i = 0; i < 3; ++i)
	{
		printf("Enter Course Number: ");
		scanf("%d", &e[i].course_number);

		printf("Enter Student Number: ");
		scanf("%d", &e[i].student_number);

		printf("\n");
	}

	printf("Enter information of assignments:\n");
	// storing assignments
	for (i = 0; i < 3; ++i)
	{
		printf("Enter Course Number: ");
		scanf("%d", &a[i].course_number);

		printf("Enter Teacher Number: ");
		scanf("%d", &a[i].teacher_number);

		printf("\n");
	}

	printf("Displaying Information:\n\n");
	// displaying stored information
	for (i = 0; i < 3; ++i)
	{
		printf("S %s %d", s[i].first_name, s[i].student_number);
		printf("\n");
		fprintf(ptr_file, "S %s %d\n", s[i].first_name, s[i].student_number);
	}
	for (i = 0; i < 3; ++i)
	{
		printf("T %s %d", t[i].first_name, t[i].teacher_number);
		printf("\n");
		fprintf(ptr_file, "T %s %d\n", t[i].first_name, t[i].teacher_number);
	}
	for (i = 0; i < 3; ++i)
	{
		printf("C %s %d %d", c[i].course_name, c[i].course_number, c[i].semester_number);
		printf("\n");
		fprintf(ptr_file, "C %s %d %d\n", c[i].course_name, c[i].course_number, c[i].semester_number);
	}
	for (i = 0; i < 3; ++i)
	{
		printf("E %d %d", e[i].course_number, e[i].student_number);
		printf("\n");
		fprintf(ptr_file, "E %d %d\n", e[i].course_number, e[i].student_number);
	}
	for (i = 0; i < 3; ++i)
	{
		printf("A %d %d", a[i].course_number, a[i].teacher_number);
		printf("\n");
		fprintf(ptr_file, "A %d %d\n", a[i].course_number, a[i].teacher_number);
	}

	fclose(ptr_file);

}