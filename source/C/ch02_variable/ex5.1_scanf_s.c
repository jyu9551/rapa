#include <stdio.h>

int main() {
	int kuk, su, young;
	scanf_s("%d %d %d", &kuk, &su, &young);
	printf("두 수의 합  = %d\n", kuk + su + young);
	printf("두 수의 평균 = %.2f", (kuk + su + young) / 3.0);
}