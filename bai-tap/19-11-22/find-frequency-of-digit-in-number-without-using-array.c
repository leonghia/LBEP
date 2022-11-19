#include <stdio.h>

// Tease functions here
int findFirst(int n);
int findFrequency(int n, int x);
int findMax(int n);
int findMin(int n);

// Main program
int main (void)
{
	int n;
	int x;
	printf("Please input n: ");
	scanf("%i", &n);
	printf("The maximum digit is %i, minimum digit is %i.\n", findMax(n), findMin(n));
	printf("The frequency of the first digit is %i time(s), of the last digit is %i time(s).\n", findFrequency(n, findFirst(n)), findFrequency(n, n % 10));
	printf("The frequency of the maximum digit is %i time(s), of the minimum digit is %i time(s).\n", findFrequency(n, findMax(n)), findFrequency(n, findMin(n)));
	
	return 0;
}


// Function to count frequency of digit x in n
int findFrequency(int n, int x)
{
	int count = 0; // Initialize count of x
	while (n > 0)
	{
		if (n % 10 == x)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}

// Function to find the maximum digit in n
int findMax(int n)
{
	int max = 0; // initialize maximum digit
	while (n > 0)
	{
		if (n % 10 > max)
		{
			max = n % 10;
		}
		n /= 10;
	}
	return max;
}

// Function to find the mimium digit in n
int findMin(int n)
{
	int min = 9; // initialize minimum digit
	while (n > 0)
	{
		if (n % 10 < min)
		{
			min = n % 10;
		}
		n /= 10;
	}
	return min;
}

// Function to find the first digit in n
int findFirst(int n)
{
	int first;
	while (n > 0)
	{
		first = n % 10;
		n /= 10;
	}
	return first;
}
