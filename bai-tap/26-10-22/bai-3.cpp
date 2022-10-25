#include <stdio.h>

int x1 = 0;
int x2 = 1;
int x3;
int i, n;

int timSoFibonaci(int n) {
	for (i = 1; i < n; i++) {
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}
	return x1;
}

int main() {
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	printf("So thu n trong day so Fibonaci la: %d", timSoFibonaci(n));
}
