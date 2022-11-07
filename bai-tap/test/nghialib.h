
int findMin(int my_array[], size_t length)
{
	// Find min of my array
	int min = my_array[0];
	int min_position;
	for (int i = 0; i < length; i++)
	{
		if (my_array[i] < min)
		{
			min = my_array[i];
		}
	}
	
	// If there is more than one such element
	// return the smallest index
	for (int i = 0; i < length; i++)
	{
		if (my_array[i] == min)
		{
			min_position = i;
			return min_position;
		}
	}
}
