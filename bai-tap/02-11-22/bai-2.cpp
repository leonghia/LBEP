#include <stdio.h>
#include <string.h>

int main(void)
{
	char my_string[50], vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	int count_vowels = 0, count_remains = 0;
	bool vowel_existed = false;
	
	printf("Please input your string: ");
	scanf("%s", my_string);
	
	
	for (int i = 0; i < strlen(my_string); i++)
	{
		for (int j = 0; j < strlen(vowels); j++)
		{
			if (vowels[j] == my_string[i])
			{
				count_vowels += 1;
				vowel_existed = true;
				break;
			}
			else {
				vowel_existed = false;
			}
		}
		if (vowel_existed == false)
		{
			count_remains += 1;
		}
	}
	printf("The count of vowels in your string are: %d\n", count_vowels);
	printf("The count of remaining characters in your string are: %d\n", count_remains);
	
	return 0;
}
