#include <stdio.h>

int main() {
	int kuk, su, young;
	scanf_s("%d %d %d", &kuk, &su, &young);
	printf("�� ���� ��  = %d\n", kuk + su + young);
	printf("�� ���� ��� = %.2f", (kuk + su + young) / 3.0);
}