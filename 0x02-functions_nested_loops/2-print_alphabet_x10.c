#include "main.h"

/**
 * print: _alphabet_x10
 *
 * Return: - 0
 */
void print_alphabet_x10(void)
{
	int alpha_x10 = 0;
	while (alpha_x10 < 10)
	{
	  char a = 'a';
	  while (a <= 'z')
	  {
	    _putchar(a);
	    a++;
	  }
	  _putchar('\n');
	  alpha_x10++;
	}
}
