#include <stdio.h>

int main() {
	int n;
	int x = 0;
	int sd;
	
	do {
		printf("Nhap vao so n: ");
		scanf("%d", &n);
	}
	while (n < 0);

	
	while (n != 0) {
		sd = n % 10;
		x = x * 10 + sd;
		n = n / 10;
	}
	
	printf("So nghich dao cua n la: %d", x);
}
