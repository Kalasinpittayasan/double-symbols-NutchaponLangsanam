#include <stdio.h>

int main() {
  int n;

  printf("Enter an integer: ");
  scanf("%d", &n);

  if (n % 2 == 0) { // ��Ǩ�ͺ������Ţ����������
    for (int i = 1; i < n; i += 2) { // ǹ�ٻ���������� 1 ����������� 2
      printf("*+"); // �ʴ�����ͧ������Ѻ�ѹ
    }
    printf("\n"); // ��鹺�÷Ѵ����
  } else {
    printf("Wrong input\n"); // �ʴ���ͤ����Դ��Ҵ
  }

  return 0;
}
