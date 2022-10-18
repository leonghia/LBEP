#include <stdio.h>

float m, n;

void myFunction() {
	printf("Thue thu nhap cua ban la: %f", n);
	float p = m - n;
	printf("\tLuong rong cua ban la: %f", p);
} 

int main() {
	
	printf("Nhap vao luong cua ban: ");
	scanf("%f", &m);
	
	if (m < 7) {
		n = m * 0.1;
		myFunction();
	}
	
	else if (m < 15) {
		n = m * 0.2;
		myFunction();
	}
	
	else {
		n = m * 0.3;
		myFunction();
	}
}
