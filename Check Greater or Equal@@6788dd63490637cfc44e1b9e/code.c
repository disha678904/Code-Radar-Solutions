#include <stdio.h>

int main() {
  int num1, num2;

   
  scanf("%d %d", &num1, &num2);

  // Check if the first number is greater than or equal to the second
  if (num1 >= num2) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}