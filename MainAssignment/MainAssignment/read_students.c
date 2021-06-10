#include <stdio.h>


int read_students()
{

	int lineNumber = 8;
	int i;
	// file initialization
	FILE *ptr_file;
	int x;
	ptr_file = fopen("output.txt", "r");
	if (!ptr_file)
		return 1;
	int count = 0;

	if (ptr_file != NULL)
	{
		char line[256]; /* or other suitable maximum line size */
		while (fgets(line, sizeof line, ptr_file) != NULL) /* read a line */
		{
			if (count == lineNumber)
			{
				//use line or in a function return it
				//            //in case of a return first close the file with "fclose(file);"
				printf("\n str %s ", line);
				fclose(file);
				return 0;

			}
			else
			{
				count++;
			}
		}
		fclose(file);
	}

}