#include <stdio.h>

int n;
int so_dao_nguoc = 0;

int timSoDaoNguoc(int n) {
	while (n != 0) {
		so_dao_nguoc = so_dao_nguoc * 10 + (n % 10);
		n /= 10;
	}
	return so_dao_nguoc;
}

int main() {
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	printf("So dao nguoc cua n la: %d", timSoDaoNguoc(n));
}
