#include "main.h"
/**
* _strlen - return the length of a string
* @s: char to check
* Description: this will return the length of a string
* Return: 0 is success
*/
#include "main.h"

int _strlen(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}
		
return (length);
}

