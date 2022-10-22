#include <stdio.h>

int main() {
	int n;
	int tong_uoc_so;
	int uoc_so;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	// truong hop n la so duong
	if (n > 0) { 
		uoc_so = -n;
		// vi du n = 5 thi cac uoc so cua n la -5, -1, 1, 5
		while (uoc_so <= n) {
			if (uoc_so != 0 && n % uoc_so == 0) {
				printf("%d\n", uoc_so);
				tong_uoc_so += uoc_so;
				uoc_so += 1;				
			}
			else {
				uoc_so += 1;
			}
		}
		printf("Tong cac uoc so cua %d la: %d", n, tong_uoc_so);
	}
	// truong hop n la so am
	else if (n < 0) {
		uoc_so = n;
		// vi du n = -7 thi cac uoc so cua n la -7, -1, 1, 7
		while (uoc_so <= -n) {
			if (uoc_so != 0 && n % uoc_so == 0) {
				printf("%d\n", uoc_so);
				tong_uoc_so += uoc_so;
				uoc_so += 1;
			}
			else {
				uoc_so += 1;
			}
		}
		printf("Tong cac uoc so cua %d la: %d", n, tong_uoc_so);
	}
}
