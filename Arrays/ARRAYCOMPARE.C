#include <stdio.h>
#include <string.h>

void findIndices(char array1[], char array2[]) {
    int len1 = strlen(array1);
    int len2 = strlen(array2);

    for (int i = 0; i <= len1 - len2; ++i) {
        int j;
        for (j = 0; j < len2; ++j) {
            if (array1[i + j] != array2[j]) {
                break;
            }
        }

        if (j == len2) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    char array1[100], array2[100];
    printf("Enter array-1: ");
    scanf("%s", array1);
    printf("Enter array-2: ");
    scanf("%s", array2);
    printf("Starting indices of array-2 in array-1: ");
    findIndices(array1, array2);
    return 0;
}
