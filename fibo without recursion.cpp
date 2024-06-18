#include <stdio.h>

void fibonacci(int n) {
    unsigned long long first = 0, second = 1, next;
    
    printf("Fibonacci sequence up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            printf("%llu ", first);
        } else if (i == 1) {
            printf("%llu ", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%llu ", next);
        }
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(terms);
    }

    return 0;
}
