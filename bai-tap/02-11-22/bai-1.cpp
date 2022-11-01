#include <stdio.h>
#include <string.h>

int main(void)
{	
	char my_string[50];
	
	printf("Please input your string: ");
	scanf("%s", my_string);
	
	printf("Your uppercase string is: ");
	
	for (int i = 0; i < strlen(my_string); i++)
	{
		if (my_string[i] >= 97 && my_string[i] <= 122)
		{
			printf("%c", my_string[i] - 32);
		}
		else
		{
			printf("%c", my_string[i]);
		}
		
	}
	return 0;
}
