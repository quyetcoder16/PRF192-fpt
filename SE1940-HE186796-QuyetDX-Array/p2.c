#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void addValue(float array[], int *size) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot add more values.\n");
        return;
    }

    float value;
    printf("Enter the value to add: ");
    scanf("%f", &value);

    array[*size] = value;
    (*size)++;
}


void searchValue(float array[], int size) {
    float value;
    int count = 0;

    printf("Enter the value to search: ");
    scanf("%f", &value);
    printf("index of %.2f:", value);
	int i;
    for ( i = 0; i < size; i++) {
        if (array[i] == value) {
            printf("%d ",i);
        }
    }
	printf("\n");
}


void printArray(float array[], int size) {
    printf("Array elements: ");
    int i;
	for (i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

void printInRange(float array[], int size) {
    float minVal, maxVal;
    printf("Enter the minimum value: ");
    scanf("%f", &minVal);
    printf("Enter the maximum value: ");
    scanf("%f", &maxVal);

    printf("Values in range %.2f to %.2f: ", minVal, maxVal);
    int i;
	for (i = 0; i < size; i++) {
        if (array[i] >= minVal && array[i] <= maxVal) {
            printf("%.2f ", array[i]);
        }
    }
    printf("\n");
}

void sortArray(float *array, int size) {
    float** adds = (float**)calloc(size,sizeof(float*));
    int i,j;
    for(i=0;i<size;i++) adds[i] = &array[i];
    int *t;
    for(i=0;i<size-1;i++){
    	for(j=i+1;j<size;j++){
    		if(*adds[i]>*adds[j]){
    			t=adds[i];
    			adds[i]=adds[j];
    			adds[j]=t;
			}
		}
	}
	for(i=0;i<size;i++) printf("%.2f ",*adds[i]);
	free(adds);
	printf("\n");
}

int main() {
    float array[MAX_SIZE];
    int size = 0;
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1- Add a value\n");
        printf("2- Search a value\n");
        printf("3- Print out the array\n");
        printf("4- Print out values in a range\n");
        printf("5- Print out the array in ascending order\n");
        printf("Others- Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addValue(array, &size);
                break;
            case 2:
                searchValue(array, size);
                break;
            case 3:
                printArray(array, size);
                break;
            case 4:
                printInRange(array, size);
                break;
            case 5:
				printf("Array sorted in ascending order.\n");
                sortArray(array, size);
                break;
            default:
                printf("Exiting program.\n");
                return 0;
        }
    }

    return 0;
}

