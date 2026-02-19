#include <stdio.h>

int main() {
    int n1, n2;
    int a[50], b[50], c[100];
    int i, j, k = 0;
    float median;

    // Input size of first array
    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array (sorted):\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Input size of second array
    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array (sorted):\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    // Merge two sorted arrays
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    // Display merged array
    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    // Calculate median
    if (k % 2 == 0)
        median = (c[k/2 - 1] + c[k/2]) / 2.0;
    else
        median = c[k/2];

    printf("\nMedian = %.2f\n", median);

    return 0;
}

