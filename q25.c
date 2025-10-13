//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
 #include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter First number: ");
    scanf("%d", &a);

    printf("Enter Second number: ");
    scanf("%d", &b);

    printf("Enter Operator (+, -, *, /, %%): "); 
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if (b != 0) 
                printf("Result: %d\n", a / b);
            else 
                printf("Error: Division by zero\n");
            break;
        case '%': 
            if (b != 0) 
                printf("Result: %d\n", a % b);
            else 
                printf("Error: Modulo by zero\n");
            break;
        default: printf("Invalid Operator\n");
    }

    return 0;
}