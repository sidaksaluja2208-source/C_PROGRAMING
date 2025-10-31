/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main(){
    int n, x, i, found = 0;
    printf("Enter the length of the Array :");
    scanf("%d", &n);
    printf("Enter the Values in Array\n");
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered Values are :\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the Number you want to search in Array :");
    scanf("%d", &x);

    for(i = 0; i < n; i++){
        if(arr[i] == x){
            printf("Found at index %d\n", i);
            found = 1;
            break; // Stop after first match
        }
    }
    if(!found){
        printf("-1\n");
    }
    return 0;
}