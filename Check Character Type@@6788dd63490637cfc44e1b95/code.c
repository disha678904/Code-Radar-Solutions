#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    scanf(" %c", &ch); // Read input, space to handle potential newline

    ch = toupper(ch); // Convert to uppercase for easier vowel check

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else if (isdigit(ch)) {
        printf("Digit\n");
    } else if (isalpha(ch)) { // isalpha checks if it's an alphabet
        printf("Consonant\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}