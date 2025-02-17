#include <stdio.h>

int main() {
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n % 2 == 0) { // ตรวจสอบว่าเป็นเลขคู่หรือไม่
    for (int i = 1; i < n; i += 2) { // วนลูปโดยเริ่มที่ 1 และเพิ่มทีละ 2
      printf("*+"); // แสดงเครื่องหมายสลับกัน
    }
    printf("\n"); // ขึ้นบรรทัดใหม่
  } else {
    printf("Wrong input\n"); // แสดงข้อความผิดพลาด
  }

  return 0;
}
