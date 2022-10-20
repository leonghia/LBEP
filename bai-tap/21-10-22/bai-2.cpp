#include <stdio.h>

int main() {
	int n;
	int i = 0;
	int m;
	
	printf("Nhap vao gia tri cua n: ");
	scanf("%d", &n);
	
	while (i < n) {
		if ((i % 2 == 0) && (i % 3 == 0)) {
			m = i;
			i++;
		}
		else {
			i++;
		}	
	}
	
	printf("So lon nhat nho hon n chia het cho 2 va 3 la: %d", m);
	
}
