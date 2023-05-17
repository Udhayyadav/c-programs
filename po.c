#include <stdio.h>

#define MAX_SIZE 10

void inverse(float A[][MAX_SIZE], int n)
{
    int i, j, k;
    float temp;
    float identity[MAX_SIZE][MAX_SIZE];

    // Initialize identity matrix
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            identity[i][j] = 0;
            if(i == j) {
                identity[i][j] = 1;
            }
        }
    }

    // Perform Gauss-Jordan elimination
    for(k=0; k<n; k++) {
        temp = A[k][k];
        for(j=0; j<n; j++) {
            A[k][j] /= temp;
            identity[k][j] /= temp;
        }
        for(i=0; i<n; i++) {
            if(i != k) {
                temp = A[i][k];
                for(j=0; j<n; j++) {
                    A[i][j] -= A[k][j] * temp;
                    identity[i][j] -= identity[k][j] * temp;
                }
            }
        }
    }

    // Copy the inverse matrix to A
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            A[i][j] = identity[i][j];
        }
    }
}

int main()
{
    int i, j, n;
    float A[MAX_SIZE][MAX_SIZE];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    inverse(A, n);

    printf("The inverse of the matrix is:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}