 /*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the Size of th array :");
    scanf("%d" ,&n);
    printf("Start Entering the Inputs :\n");
    int arr[n];
    for( int i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
    }
    printf("Entered Values:\n");
    for( int i=0;i<n;i++){
        printf("%d " ,arr[i]);
    }
    
}