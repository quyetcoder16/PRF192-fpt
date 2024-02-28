#include <stdio.h>
#include <ctype.h>

int exist (char * fileName){
	int existed = 0;
	FILE* f = fopen(fileName,"r");
	if(f!=NULL){
		existed = 1;
		fclose(f);
	}
	return existed;
}

int writeFile(char* filename)
{ 
	char c; /* inputted character */
	int CTRL_Z = -1;
	if (exist (filename))
	{ 
		printf("The file %s existed. Override it Y/N?", filename); 
		if (toupper(getchar())=='N') return 0;
	}
	/* open the file for writing */
	FILE* f= fopen(filename, "w");
	fflush(stdin); /* Clear input buffer */
	do
	{ 
		c=getchar(); /* get a character */
		if (c!=CTRL_Z) fputc(c,f); /* Write it to file */
	}
	while (c!=CTRL_Z); 
	fclose(f); 
	return 1;
}

int printFile(char* filename)
{
	char c; /* inputted character */
	if (exist (filename)==0)
	{ 
		printf("The file %s does not exist.\n", filename); return 0;
	}
	/* open the file for reading */
	FILE* f= fopen(filename, "r");
	/* When data can be read from the file to variable, process variable */
	while ((c=fgetc(f))!=EOF) putchar(c);
	fclose(f);
	return 1;
}

int main(int argCount, char* args[])
{ 
	if (argCount!=2) printf ("Syntax: p1 filename\n");
	else 
		if (writeFile (args[1])) printf("Writing the file %s: doneXn", args[1]);
		else printf("Can not write the file %s\n", args[1]);
		if(printFile(args[1])) printf("reading the file done\n");
		else printf("can not reading the file \n");
	return 0;
}
