#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j, k;
    int maxLen = 0, endIndex = 0;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            k = 0;
            while (s1[i + k] == s2[j + k] && (i + k) < len1 && (j + k) < len2) {
                k++;
            }
            if (k > maxLen) {
                maxLen = k;
                endIndex = i + k;
            }
        }
    }

    if (maxLen == 0) {
        printf("No common substring found\n");
    } else {
        printf("Longest Common Substring: ");
        for (i = endIndex - maxLen; i < endIndex; i++) {
            printf("%c", s1[i]);
        }
        printf("\nLength: %d\n", maxLen);
    }

    return 0;
}

