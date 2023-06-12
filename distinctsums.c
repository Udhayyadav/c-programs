  
#include <stdio.h>
#include <stdbool.h>

#define MAX_N 6
#define MAX_Z 9

int main() {
    int N;
    scanf("%d", &N);

    int array[MAX_N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Create a boolean array to keep track of unique sums
    bool distinctSums[(MAX_Z * N) + 1];
    for (int i = 0; i <= (MAX_Z * N); i++) {
        distinctSums[i] = false;
    }

    // Calculate distinct sums
    for (int i = 0; i < N; i++) {
        for (int j = (MAX_Z * N); j >= array[i]; j--) {
            if (distinctSums[j - array[i]]) {
                distinctSums[j] = true;
            }
        }
        distinctSums[array[i]] = true;
    }

    // Print all distinct sums
    printf("Distinct Sums:\n");
    for (int i = 0; i <= (MAX_Z * N); i++) {
        if (distinctSums[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}
