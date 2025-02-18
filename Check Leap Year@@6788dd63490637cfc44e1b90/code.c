 #include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)) {
        printf("%d Leap Year");  // Corrected printf format
    } else {
        printf("%d Not a Leap Year");  // Corrected printf format
    }

    return 0;
}

