#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("char.txt", "r");
    if (fp == NULL)
        exit(1);
    FILE *fw;
    fw = fopen("codesum.txt", "w");
    if (fw == NULL)
        exit(1);

    char a, b;
    // fscanf(fp, "%c %c", &a, &b);
    a = getc(fp);
    b = getc(fp);

    int c = a + b;
    fprintf(fw, "%d", c);

    fclose(fp);
    fclose(fw);
    


    return 0;
}