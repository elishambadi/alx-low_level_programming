#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *rot13 - rot13 cipher
 *@src: string to cipher
 *
 *Return: ciphered string
 */

char *rot13(const char *src)
{
	char* result = malloc(strlen(src));
	char* current_char = result;

	if(result != NULL){
		strcpy(result, src);
		while(*current_char != '\0'){
			if(
					(*current_char >= 97 && *current_char <= 122) ||
					(*current_char >= 65 && *current_char <= 90))
			{
				if(
						*current_char > 109 ||
						(*current_char > 77 && *current_char < 91))
				{
					*current_char -= 13;
				}
				else
				{
					*current_char += 13;
				}
			}
			current_char++;
		}
	}
	
	return (result);
}
