/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

 #include <stdio.h>
int main() {
    int n;
    printf("Till what no. do you want to print primes?\n");
    scanf("%d", &n);
    printf("The prime numbers from 1 to %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        int count = 0;   // to count divisors

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {   // only 1 and itself divide => prime
            printf("%d\n", i);
        }
    }

    return 0;
}