#include "main.h"
/**
 * Prints: _putchar, followed by a new line.
 * 
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char pch[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(pch[c]);
	}
	_putchar('\n');
	return (0);
}
