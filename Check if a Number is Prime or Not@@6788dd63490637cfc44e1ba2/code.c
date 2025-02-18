#include <stdio.h>

int main() {
    int num;
    int is_prime = 1; // Assume it's prime initially

    
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Found a divisor, not prime
                break; // Exit the loop early
            }
        }
    }

    if (is_prime == 1) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
} 