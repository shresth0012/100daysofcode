//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    printf("Enter source file name: ");
    scanf("%s", srcFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    FILE *src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);
    return 0;
}
