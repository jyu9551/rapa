#include <stdio.h>

int main() {
	char name[100];
	char gender[3];
	int kor, math, eng;

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));

	printf("������ �Է��ϼ���(��/��) : ");
	scanf_s("%s", gender, sizeof(gender));

	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &math, &eng);

	printf("\n--- �л����� ---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� = %d\n", kor);
	printf("���� = %d\n", eng);
	printf("���� = %d\n", math);

	printf("�հ� = %d\n", kor + eng + math);
	printf("��� = %.2f\n", (kor + eng + math)/3.0);
}