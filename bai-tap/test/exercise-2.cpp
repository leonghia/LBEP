#include <stdio.h>
#include "nghialib.h"

int main(void)
{
	int a[] = {1, 2, 4, 5, 10, 100, 2, -22};
	int n = sizeof(a)/sizeof(a[0]);
	printf("Index of the smallest is i = %i", smallest_index(a, n));
}
