#include <stdio.h>

int main(void) {
  int number,i;
  printf("Enter the Number: ");
  scanf("%d", &number);
  printf("Enter the I: ");
  scanf("%d",&i);
  printf("\n");
  // int i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= number);
  return 0;
}