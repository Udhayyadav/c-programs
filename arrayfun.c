#include <stdio.h>
#include <stdlib.h>

// function to calculate the sum of an array of integers
int sum(int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += *(arr + i);
    }
    return s;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s input_file output_file\n", argv[0]);
        return 1;
    }

    // open the input file for reading
    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    // read the number of elements in the array
    int n;
    fscanf(input_file, "%d", &n);

    // allocate memory for the array
    int *arr = (int *) malloc(n * sizeof(int));

    // read the array elements from the file
    for (int i = 0; i < n; i++) {
        fscanf(input_file, "%d", arr + i);
    }

    // calculate the sum of the array elements
    int s = sum(arr, n);

    // open the output file for writing
    FILE *output_file = fopen(argv[2], "w");
    if (output_file == NULL) {
        printf("Error opening output file\n");
        return 1;
    }

    // write the sum to the output file
    fprintf(output_file, "Sum: %d\n", s);

    // close the input and output files
    fclose(input_file);
    fclose(output_file);

    // free the memory allocated for the array
    free(arr);

    return 0;
}