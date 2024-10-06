// Day : 67 WAP to writing some conteny or text to a file?

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    FILE *fp;

    // Open the file in write mode
    fp = fopen("demo.txt", "w");
    if (fp == NULL) {
        printf("Error opening the file!");
        exit(1);
    }

    // Read input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Write the input to the file
    fprintf(fp, "The value of n = %d\n", n);

    // Close the file
    fclose(fp);

    printf("The value of n = %d has been written to demo.txt\n", n);

    return 0;
}
