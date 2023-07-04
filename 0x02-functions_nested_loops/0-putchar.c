#include "main.h"

/**
 *main - it is main
 *Declaration - jt us declaration
 *Return: always 0
 */

int main(void)
{
	int i;
	char str[8] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);

}
