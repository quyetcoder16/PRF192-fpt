#include <stdio.h>
#include <string.h>
#include <ctype.h>

int exist(char *fileName)
{
	int existed = 0;
	FILE *f = fopen(fileName, "r");
	if (f != NULL)
	{
		existed = 1;
		fclose(f);
	}
	return existed;
}

/* Write a file from lines inputted until the 0-line entered */
int writeFile(char *filename)
{
	char c[20]; 
	if (exist(filename) == 0)
	{
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	FILE *f = fopen(filename, "r");
	while ((c = fgets(f)) != EOF){
		printf("%s\n",c);
		
	}
	fclose(f);
	return 1;
}

/* Print out the content of a text file to the monitor */

int printFile(char *filename)
{
	if (exist(filename) == 0)
	{
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	/* open the file for reading */
	FILE *f = fopen(filename, "r");
	char line[201];															/* a line from the file */
	/* When data can be read from the file to variable, process variable */ /* [^\n]*c" => read a line to \n then remove \n */
	while (fscanf(f, "%[^\n]%*c", line) > 0)
		puts(line);
	fclose(f);
	return 1;
}
int main(int argcount, char *args[])
{
	char filename[81];
	printf("Program for writing then reading a file\n");
	printf("Enter a filename:");
	gets(filename);
	printf("Write file:\n");
	if (writeFile(filename) == 1)
	{
		printf("Data in the file %s\n", filename);
		if (printFile(filename) == 0)
			printf("File error!\n");
	}
	else
		printf("Writing file fail!\n", filename);
	getchar();
	return 0;
}
