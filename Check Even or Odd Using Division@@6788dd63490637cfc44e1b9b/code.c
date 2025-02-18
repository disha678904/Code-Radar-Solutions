#include <stdio.h>

int main() {
  int num;

  // Prompt the user to enter a number
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Check if the number is even or odd using division by 2
  if (num / 2 * 2 == num) {  // If num is divisible by 2, the result of integer division by 2 multiplied by 2 should be equal to the original number.
    printf("Even\n");
  } else {
    printf("Odd\n");
  }

  return 0;
}