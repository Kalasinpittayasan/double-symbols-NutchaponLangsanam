#include <stdio.h>

int main() {
  int n;

  // �Ѻ�Ţ�ӹǹ������
  printf("Enter an even integer: ");
  scanf("%d", &n);

  // ��Ǩ�ͺ������Ţ����������
  if (n % 2 != 0) {
    printf("Error: Input is not an even integer.\n");
    return 1; // ����÷ӧҹ�������ʢ�ͼԴ��Ҵ
  }

  // �ʴ�����ͧ������Ѻ�ѹ
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("*");
    } else {
      printf("+");
    }
  }
  printf("\n");

  return 0; // ����÷ӧҹ����
}

