#include <stdio.h>
#include <math.h>

// bai 1
int tinhChuViTamGiac(int a, int b, int c) {
	int p = a + b +c;
	return p;
}

// bai 2
float tinhDienTichTamGiac(int a, int b, int c) {
	int q = (a + b + c) / 2;
	float s = (float)sqrt(q * (q - a) * (q - b) * (q - c));
	return s;
}

// bai 3
int tinhTongChuSo(int n) {
	int sd, x = 0;
	
	while (n != 0) {
		sd = n % 10;
		x += sd;
		n /= 10;
	}
	return x;
}

// bai 4
int timUocChungLonNhat(int a, int b) {
	int i; // so lan chay vong lap
	int m; // noi chua uoc chung cua a va b
	for (i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			m = i;
		}
	}
	return m;
}

// bai 5
int timBoiChungNhoNhat(int a, int b) {
	int i; // so lan chay vong lap
	int m; // noi chua boi chung cua a va b
	for (i = 1; i <= (a * b); i++) {
		if (i % a == 0 && i % b == 0) {
			m = i;
			break;
		}
	}
	return m;
}

// bai 6
bool ktSoChinhPhuong(int n) {
	int i; // so lan chay vong lap
	for (i = 1; i <= n; i++) {
		if (n % i == 0 && n / i == i) {
			return true;
		}
	}
	return false;
}

// bai 7
int timSoNguyenDuongNhoNhat() {
	int n;
	int s;
	for (n = 0; n < 10000; n++) {
		s += n;
		if (s > 10000) {
			break;
		}
	}
	return n;
}

// bai 8
bool ktChuSoGiamDanTuTraiSangPhai(int n) {
	int so_du;
	int x = -1;
	while (n != 0) {
		so_du = n % 10;
		n /= 10;
		if (so_du > x) {
			x = so_du;
		}
		else {
			return false;
		} 
	}
	return true;
}
