#include "main.h"
/**
  *main - Entry point
  *
  *Description: prints _putchar
  *
  *Return: 0
  */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_puthchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
