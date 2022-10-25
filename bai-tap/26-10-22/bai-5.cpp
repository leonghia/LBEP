#include <stdio.h>

int i, n;

float s = 0;

float tinhTong(int n) {
	for (i = 1; i <= n; i++) {
		s += (float)1/i;
	}
	return s;
}

int main() {
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	printf("Tong cua s bang %f", tinhTong(n));
}
