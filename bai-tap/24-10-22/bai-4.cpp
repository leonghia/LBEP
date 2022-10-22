#include <stdio.h>

int main() {
	int n;
	int m = 0; // cac chu so cua n
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	do {
		m = n % 10;
		n /= 10;
	}
	while (n > 0);
	
	printf("Chu so dau tien cua n la: %d", m);
}
