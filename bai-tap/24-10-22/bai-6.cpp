#include <stdio.h>

int main() {
	int a = 0; // so dau tien cua Fibonaci
	int b = 1; // so thu hai cua Fibonaci
	int m; // tinh so tiep theo cua Fibonaci
	int n; 
	int i; // so lan chay vong lap
	int so_can_tim;
	
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	
	for (i = 0; i < n-1; i++) {
		m = a + b;
		a = b;
		b = m;
	}
	
	/* Vi du voi i = 6 thi chung ta 
		tinh duoc hai so n = 7 va n = 8 
		Vi vay de tim duoc so n bat ky thi ta
		chay vong lap den i = n -1
		Khi do so tai vi tri n se bang a
	*/
	
	so_can_tim = a;
	
	printf("So o vi tri thu %d cua day so Fibonaci la: %d", n, so_can_tim);
}
