#include <stdio.h>
#include <string.h>

int main(void)
{
	char string_a[50], string_b[50];
	
	printf("Nhap vao chuoi A: ");
	scanf("%s", string_a);
	
	printf("Nhap vao chuoi B: ");
	scanf("%s", string_b);
	
	for (int i = 0; i < strlen(string_b); i++)
	{
		if (strchr(string_a, string_b[i]) != NULL)
		{
			continue;
		}
		else
		{
			printf("Chuoi B khong nam trong chuoi A");
			return 0;
		}
	}
	printf("Chuoi B co nam trong chuoi A");
	return 0;
}
