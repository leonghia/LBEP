#include <stdio.h>

int main(void)
{
	int my_array[] = {1, 2, 0, -2, 5, 2, 7, -6, 22, 10};
	int count = 0, count_highest = 0, sum = 0, sum_highest = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if (my_array[i] > 0)
		{
			count++;
			sum += my_array[i];
			if (count > count_highest)
			{
				count_highest = count;
			}
			if (sum > sum_highest)
			{
				sum_highest = sum;
			}
		}
		else
		{
			count = 0;
			sum = 0;
		}
	}
	printf("Co nhieu nhat %i so duong lien tiep canh nhau.\n", count_highest);
	printf("Tong cac so duong lien tiep lon nhat la %i", sum_highest);
	return 0;
}
