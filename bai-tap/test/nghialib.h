int findMin(int my_array[])
{
	// Find min
	int min = my_array[0];
	int min_position;
	for (int i = 0; i < 8; i++)
	{
		if (my_array[i] < min)
		{
			min = my_array[i];
			min_position = i;
		}
	}
	
	// If there is more than one such element
	// return the smallest index
	for (int i = 0; i < 8; i++)
	{
		if (my_array[i] == min)
		{
			min_position = i;
			return min_position;
		}
	}
}
