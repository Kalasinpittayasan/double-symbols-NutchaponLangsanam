#include <stdio.h>
int main(){
int n;

  printf("เลข: ");
  scanf("%d", &n);

  if (n % 2 != 0) {
    printf("Error: Input is not an even integer.\n");
    return 1;
}

 for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("*");
    } else {
      printf("+");
    }
  }
  printf("\n");

  return 0;
}
