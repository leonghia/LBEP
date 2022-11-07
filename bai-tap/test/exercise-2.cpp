#include <stdio.h>
#include "nghialib.h"

int main(void)
{
	int my_array[] = {1, 2, 4, 5, 10, 100, 2, -22};
	printf("The index of the smallest element is: %i", findMin(my_array));
}
