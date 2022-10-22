#include <stdio.h>

int main() {
	int n;
	int m = 0; // tong cac chu so cua n
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (n > 0) {
		m += n % 10;
		n /= 10;
	}
	printf("Tong cac chu so cua n la: %d", m);
}
