// Your code here...#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if((num%4==0) && (num%100!=0)) || (num%400==0)
        printf("Leap Year" ,num);
        else{
            printf("Not a Leap Year" ,num);
             }
    
    return 0;
}

