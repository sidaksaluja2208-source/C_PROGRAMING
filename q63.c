/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
 #include <stdio.h>

int main() {
    int n1, n2;

    // First array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Output
    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}

//by strcat
#include <stdio.h>
#include <string.h>

int main() {
    char arr1[100], arr2[100];

    printf("Enter first string: ");
    scanf("%s", arr1);

    printf("Enter second string: ");
    scanf("%s", arr2);

    // strcat merges arr2 into arr1
    strcat(arr1, arr2);

    printf("Merged String: %s\n", arr1);

    return 0;
}