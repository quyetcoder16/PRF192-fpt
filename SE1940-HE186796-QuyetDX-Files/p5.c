
#include <stdio.h>
/* Processing data in a file is slow. So, if possible, all operations should be performed in one time.*/
void processFile(char *fname, int *pCount, double *psum)
{
    FILE *f = fopen(fname, "r");
    *pCount = 0; /* reset count */
    *psum = 0;
    /* reset sum */
    double x; /* variable containing a value from file */
    while (fscanf(f, "%lf", &x) == 1)
    {
        (*pCount)++;
        (*psum) += x;
    }

    fclose(f);
}

int main()
{
    char infName[] = "array3.txt";
    int count = 0;  /* number of values in file */
    double sum = 0; /* sum of values in file */
    processFile(infName, &count, &sum);
    printf("Number of values in the file:%d\n", count);
    printf("Average of values in the file:%lf\n", sum / count);
    getchar();
    return 0;
}
