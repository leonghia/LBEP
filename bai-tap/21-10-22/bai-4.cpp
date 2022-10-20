#include <stdio.h>

int main() {
	int n;
	int m = 0;
	int p;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (n != 0) {
		p = n % 10;
		m = m * 10 + p;
		n = n / 10;
	}
	printf("So nghich dao cua n la: %d", m);
}
