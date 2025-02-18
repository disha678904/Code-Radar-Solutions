#include <stdio.h>

int main() {
  int age;

  
  scanf("%d", &age);

  // Check if the person is eligible to vote
  if (age >= 18) {
    printf("Eligible\n");
  } else {
    printf("Not Eligible\n");
  }

  return 0;
}