#include <stdio.h>
#include "readlines.h"
#include "newlist.h"
#include "addstudent.h"
#include "addteacher.h"
#include "addcourse.h"
#include "addenrolment.h"
#include "addassignment.h"

/*struct student
{
	char initial[20]; 
	char first_name[20];
	int student_number;
} s[10];

struct teacher
{	
	char initial[20];
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
} a[10];*/

int main() {

	int p;

	read_lines();

	printf("Press 1 for New File or press any number key for next step: ");
	scanf("%d", &p);

	if (p == 1)
	{
		new_list();
	}

	printf("Adding to file: press 1 for student, 2 for teacher, 3 for course, 4 for enrolment, 5 for assignment: ");
	scanf("%d", &p);

	if (p == 1)
	{
		add_student();
	}

	if (p == 2)
	{
		add_teacher();
	}

	if (p == 3)
	{
		add_course();
	}

	if (p == 4)
	{
		add_enrolment();
	}

	if (p == 5)
	{
		add_assignment();
	}

	return(0);
}
