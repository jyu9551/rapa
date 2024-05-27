#include <stdio.h>

int main() {
	float f = 3.14159265359F;
	double d = 3.14159265359;

	printf("%.11f %.11lf\n", f, d);
	printf("%d\n", f == d);

	f = 10.1f;
	d = 10.1;
	printf("%f\n", f);
	printf("%f\n", d);
	printf("%d\n", f == d);
}