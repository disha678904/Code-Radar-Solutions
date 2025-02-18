  #include <stdio.h>

int main() {
    char ch;   
    scanf("%c", &ch);  

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
         
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase\n");
        } else {  
            printf("Lowercase\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;