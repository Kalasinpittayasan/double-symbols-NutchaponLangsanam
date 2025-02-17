
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);


    if (n % 2 == 0 && n > 0) {
        for (int i = 0; i < n / 2; i++) {
            printf("*");
            printf("+");
        }
        printf("\n");
    } else {
        printf("Wrong input\n");

     }
  return 0;
}
