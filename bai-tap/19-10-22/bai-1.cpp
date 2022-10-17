#include <stdio.h>
#include <math.h>

int main() {
	float m;
	
	printf("Nhap vao doanh thu cua ban: ");
	
	scanf("%f", &m);
	
	if (m <= 100) {
		float n = m * 0.05;
		printf("Hoa hong cua ban la: %f", n);
	}
	
	else {
		if (m <= 300) {
			float n = m * 0.1;
			printf("Hoa hong cua ban la: %f", n);
		}
		else {
			float n = m * 0.2;
			printf("Hoa hong cua ban la: %f", n);
		}
	}
}
