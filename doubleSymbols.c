#include <stdio.h>

int main() {
  int n;

  // รับเลขจำนวนเต็มคู่
  printf("Enter an even integer: ");
  scanf("%d", &n);

  // ตรวจสอบว่าเป็นเลขคู่หรือไม่
  if (n % 2 != 0) {
    printf("Error: Input is not an even integer.\n");
    return 1; // จบการทำงานด้วยรหัสข้อผิดพลาด
  }

  // แสดงเครื่องหมายสลับกัน
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("*");
    } else {
      printf("+");
    }
  }
  printf("\n");

  return 0; // จบการทำงานปกติ
}

