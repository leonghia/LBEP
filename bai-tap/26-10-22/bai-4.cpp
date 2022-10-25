#include <stdio.h>

int n;
int i;
int s = 0;

int tinhTong(int n) {
	for (i = 0; i <= n; i++) {
		s += i;
	}
	return s;
}

int main() {
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	printf("Tong cua S la bang %d", tinhTong(n));
}
