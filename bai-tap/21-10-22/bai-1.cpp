#include <stdio.h>

int main() {
	int m = 1;
	int n;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (m <= n) {
		printf("%d ", m);
		m += 2;
	}
}
