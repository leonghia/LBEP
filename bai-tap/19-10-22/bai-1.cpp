#include <stdio.h>

float m, n;

void myFunction() {
	printf("Hoa hong cua ban la: %f", n);
}

int main() {
	
	printf("Nhap vao doanh so cua ban: ");
	scanf("%f", &m);
	
	if (m <= 100) {
		n = m * 0.05;
		myFunction();
	}
	
	else if (m <= 300) {
		n = m * 0.1;
		myFunction();
	}
	
	else {
		n = m * 0.2;
		myFunction();
	}
}
