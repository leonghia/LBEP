#include <stdio.h>

float m;

void myFunction(const char xeploai[]) {
	printf("Ban dat xep loai %s", xeploai);
}

int main() {
	printf("Nhap vao diem cua ban: ");
	scanf("%f", &m);
	
	if (m >= 9) {
		myFunction("A");
	}
	
	else if (m >= 7) {
		myFunction("B");
	}
	
	else if (m >= 5) {
		myFunction("C");
	}
	
	else {
		myFunction("F");
	}
}
