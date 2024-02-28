#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N_MAX = 100;

struct student {
	char name[255];
	char address[255];
	double mark;
};

typedef struct student student_t;

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

student_t convertDataFromString(char *s){
	student_t objStudent;
	int i=0;
	int j=0;
	while(s[i]!=';'){
		objStudent.name[j]=s[i];
		i++;
		j++;
	}
	i++;
	j=0;
	while(s[i]!=';'){
		objStudent.address[j]=s[i];
		i++;
		j++;
	}
	char mark[255];
	j=0;
	i++;
	while(s[i]!=';'){
		mark[j] = s[i];
		i++;
		j++;
	}
	char *endptr;
	objStudent.mark = strtod(mark,&endptr);
	return objStudent;
}

int processFileRead(char *filename,int *size,student_t* list_students)
{
    char c; 
	if (exist(filename) == 0)
	{
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	FILE *f = fopen(filename, "r");
	char line[255];
	student_t objStudentInput;
	while (fgets(line, sizeof(line), f)) {
		objStudentInput = convertDataFromString(line);
		if(*size<N_MAX){
			list_students[*size]=objStudentInput;
			(*size)++;
		}
	}
	fclose(f);
	return 1;
}

void sortStudentByMark(int size,student_t* list_students){
	int i = 0;
	int j =0;
	student_t tempObjStudent;
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(list_students[i].mark<list_students[j].mark){
				tempObjStudent=list_students[i];
				list_students[i]=list_students[j];
				list_students[j]=tempObjStudent;
			}
		}
	}
}

int processWriteFile(char *filename,int size,student_t* list_students)
{
	char line[201]; 
	int length = 0; 
	FILE *f = fopen(filename, "w");
	fflush(stdin); 
	int i=0;
	for(i=0;i<size;i++){
		fprintf(f,"%s;%s;%.2lf\n",list_students[i].name,list_students[i].address,list_students[i].mark);
	}
	fclose(f);
	return 1;
}


int main(){
	student_t* list_students = (student_t*)(malloc(N_MAX*sizeof(student_t)));
	char fi[] = "students.txt";
	char fo[] = "students_2.txt";
	int size = 0;
	if (!processFileRead(fi, &size, list_students)) {
        free(list_students);
        return 1;
    }
    sortStudentByMark(size,list_students);
    if (!processWriteFile(fo,size, list_students)) {
        free(list_students);
        return 1;
    }
	free(list_students);
	return 0;
}
