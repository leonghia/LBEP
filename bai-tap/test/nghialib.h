
int smallest_index(int a[], int n)
{
	// Find min
	int min = a[0];
	int min_index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	
	// If there is more than one such element
	// return the smallest index
	for (int i = 0; i < n; i++)
	{
		if (a[i] == min)
		{
			min_index = i;
			return min_index;
		}
	}
}
