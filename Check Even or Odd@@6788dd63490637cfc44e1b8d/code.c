#include <stdio.h>

int main() {
    int number;  
    scanf("%d", &number);
      if (number % 2 == 0) {
        printf("%d Even", number);
    } else {
        printf("%d Odd", number);
    }

    return 0;
}
