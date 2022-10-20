#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	int i = 2;
	
	while (i < n) {
		if (n % i != 0) {
			i++;
		}
		else {
			break;
		}
	}
	
	if (i == n) {
		printf("%d la so nguyen to", n);
	}
	
	else {
		printf("%d khong phai la so nguyen to", n);
	}
	
}
