#include <stdio.h>

int main() {
	int n, m, i;
	int p = 0;
	

	do {
		printf("Nhap vao so n: ");
		scanf("%d", &n);
	}
	
	while (n < 0);	
	
	
	for (i = 1; i < n; i++) {
		if (n % i == 0) {
			m += i;
		}
		else {
		}
	}
	if (m == n) {
		printf("%d la so hoan hao", n);
	}
	else {
		printf("%d khong phai la so hoan hao", n);
	}
}
