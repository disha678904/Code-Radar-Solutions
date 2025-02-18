 #include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    // Corrected condition with properly enclosed parentheses
    if ((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)) {
        printf("%d Leap Year\n" );  // Corrected printf format
    } else {
        printf("%d  Not a Leap Year\n" );  // Corrected printf format
    }

    return 0;
}

