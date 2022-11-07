#include <stdio.h>

int main(void)
{
	// Declare array of 10 integers
	int my_array[11];
	
	// Input 10 intergers
	printf("Enter 10 integers:\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("a[%i]: ", i);
		scanf("%i", &my_array[i]);
	}
	
	// Reverse the order of the input
	printf("Display in the reversed order:\n");
	for (int i = 10; i >=1 ; i--)
	{
		printf("%i\n", my_array[i]);
	}
	return 0;
}
