#include <stdio.h>

int a, b, c, max;

int timSoLonNhat(int a, int b, int c) {
	max = a;
	if (b > max) {
		max = b;
	}
	else if (c > max) {
		max = c;
	}
	return max;
}

int main() {
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	printf("Nhap vao so b: ");
	scanf("%d", &b);
	printf("Nhap vao so c: ");
	scanf("%d", &c);
	printf("So lon nhat trong ba so la %d", timSoLonNhat(a, b, c));
}
