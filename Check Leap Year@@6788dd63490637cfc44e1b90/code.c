 #include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)) {
        printf("Leap Year %d");  // Corrected printf format
    } else {
        printf("Not a Leap Year %d");  // Corrected printf format
    }

    return 0;
}

