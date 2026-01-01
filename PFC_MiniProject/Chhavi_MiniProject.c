#include <stdio.h>

/* Function declarations */
void print1ToN(int n);
void printEvenUpToN(int n);
void printOddUpToN(int n);

int main() {
    int choice, n;

    printf("Menu:\n\n");

    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("\n");

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("\n");

    switch (choice) {
        case 1:
            print1ToN(n);
            break;

        case 2:
            printEvenUpToN(n);
            break;

        case 3:
            printOddUpToN(n);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


/* Function to print numbers from 1 to N */
void print1ToN(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
}


/* Function to print even numbers up to N */
void printEvenUpToN(int n) {
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
}


/* Function to print odd numbers up to N */
void printOddUpToN(int n) {
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
}
