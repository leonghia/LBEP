#include <stdio.h>

int main() {
	int a, b;
	int uoc_so_max; // uoc so lon nhat cua a va b
	int boi_so_min; // boi so nho nhat cua a va b
	int uoc_so = 1; // cac uoc so cua a va b
	int boi_so = 1; // cac boi so cua a va b

	printf("Nhap vao so a: ");
	scanf("%d", &a);
	
	printf("Nhap vao so b: ");
	scanf("%d", &b);

	/* Tim uoc chung lon nhat
	cua a va b */	
	while (uoc_so <= a) {
		if ((a % uoc_so == 0) && (b % uoc_so == 0)) {
			uoc_so_max = uoc_so;
			uoc_so++;
		}
		else {
			uoc_so++;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, uoc_so_max);
	
	/* Tim boi chung nho nhat
	cua a va b */
	while (boi_so <= (a * b)) {
		if ((boi_so % a == 0) && (boi_so % b == 0)) {
			boi_so_min = boi_so;
			break;
		}
		else {
			boi_so++;
		}
	}
	printf("Boi chung nho nhat cua %d va %d la: %d", a, b, boi_so_min);
}
