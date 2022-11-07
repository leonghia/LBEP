#include <stdio.h>
#include "nghialib.h"

int main(void)
{
	int my_array[] = {1, 2, 4, 5, 10, 100, 2, -22};
	size_t n = sizeof(my_array)/sizeof(my_array[0]);
	printf("Index of the smallest element is i = %i", findMin(my_array, n));
}
