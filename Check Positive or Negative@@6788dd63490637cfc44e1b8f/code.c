 #include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    
    if (num > 0) {
       printf("positive", num);
    } else if (num < 0) {
        printf(" Negative", num);
    } else {
        printf("Zero", num);
    }

    return 0;
}
.