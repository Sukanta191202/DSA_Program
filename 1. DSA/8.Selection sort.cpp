#include <stdio.h>

int main() {
    int a[100], n, i, j, loc, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort logic
    for (i = 0; i < n - 1; i++) {
        loc = i;   // assume current index is minimum

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[loc]) {
                loc = j;   // update location of minimum
            }
        }

        // swap after inner loop
        if (loc != i) {
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

