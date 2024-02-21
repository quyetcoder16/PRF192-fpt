/*test fseek.c */
#include <stdio.h>
int main()
{
    char fname[] = "test_fseek.txt";
    char c; /* a chacracter from file */
    int i;
    FILE *f = fopen(fname, "r");
    printf("15 first characters:\n");
    for (i = 0; i < 15; i++)
        putchar(fgetc(f));
    puts("\n");
    fseek(f, -5, SEEK_CUR); /* from CURRENT position*/
    for (i = 0; i < 5; i++)
        putchar(fgetc(f));
    puts("\n");
    fseek(f, -10, SEEK_END); /* from END position */
    for (i = 0; i < 5; i++)
        putchar(fgetc(f));
    puts("\n");
    fseek(f, 10, SEEK_SET); /* from BEGINNING position */
    for (i = 0; i < 5; i++)
        putchar(fgetc(f));
    fclose(f);
    getchar();
    return 0;
}
