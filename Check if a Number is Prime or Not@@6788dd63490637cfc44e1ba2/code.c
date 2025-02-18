#include <stdio.h>

 

int main() {
    int num;

    scanf("%d", &num);

    if (isPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}