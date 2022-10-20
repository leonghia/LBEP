#include <stdio.h>

int main() {
	int n, m;
	int p = 0;
	int i = 1;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	while (i <= n-1) {
		if (n % i == 0) {
			m += i;
			i++;
		}
		else {
			i++;
		}
	}
	if (m == n) {
		printf("%d la so hoan hao", n);
	}
	else {
		printf("%d khong phai la so hoan hao", n);
	}
}
