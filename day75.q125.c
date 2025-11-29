//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100], text[1000];

    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar(); 

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Cannot open the file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
