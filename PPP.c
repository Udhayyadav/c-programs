#include <stdio.h>
#include <stdlib.h>

// Function to print multiplication table of a given number
void printMultiplicationTable(int number, FILE* outputFile) {
    fprintf(outputFile, "Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        fprintf(outputFile, "%d x %d = %d\n", number, i, number*i);
    }
}

// Function to print the following pattern:
// 1
// 2 3
// 4 5 6
void printPattern(FILE* outputFile) {
    int count = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            fprintf(outputFile, "%d ", count);
            count++;
        }
        fprintf(outputFile, "\n");
    }
}

int main(int argc, char* argv[]) {
    // Check if at least one command line argument is provided
    if (argc < 2) {
        printf("Please provide an input argument (a or b).\n");
        return 1;
    }

    // Open the output file to store the results
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Unable to open output file.\n");
        return 1;
    }

    // Get the input argument from command line
    char* choice = argv[1];

    // Call the appropriate function based on the user's choice
    if (choice[0] == 'a') {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        printMultiplicationTable(number, outputFile);
    }
    else if (choice[0] == 'b') {
        printPattern(outputFile);
    }
    else {
        printf("Invalid input argument.\n");
        return 1;
    }

    // Close the output file
    fclose(outputFile);
    printf("Results stored in output.txt.\n");
    return 0;
}





