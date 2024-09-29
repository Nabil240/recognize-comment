#include<stdio.h>
#include<string.h>

int main() {
    int len;
    char com[50];

    printf("Enter a Comment: ");
    fgets(com, sizeof(com), stdin);  // Replacing unsafe gets() with fgets()

    len = strlen(com);

    // Removing trailing newline character added by fgets()
    if (com[len - 1] == '\n') {
        com[len - 1] = '\0';
        len--;
    }

    // Check for single-line comment
    if (com[0] == '/' && com[1] == '/') {
        printf("It is a single line Comment.\n");
    }
    // Check for multi-line comment
    else if (com[0] == '/' && com[1] == '*' && com[len - 1] == '/' && com[len - 2] == '*') {
        printf("It is a multiple line Comment.\n");
   
