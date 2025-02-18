 #include <stdio.h>

int main() {
  int num;
   
  scanf("%d", &num);

  // Check the sign of the number
  if (num > 0) {
    printf("Positive\n");
  } else if (num < 0) {
    printf("Negative\n");
  } else {
    printf("Zero\n");
  }

  return 0;
}