#include <stdio.h>

int main() {
	int n;
	int m = 0; // chu so max
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (n > 0) {
		if ((n % 10) > m) {
			m = n % 10;
		}
		n /= 10;
	}
	
	printf("Chu so lon nhat cua n la: %d", m);
	
}
