#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 * should be printed
*/

void print_diagonal(int n)
{
	int postn, space;
    
    if (n <= 0)
	    _putchar('\n');
    else
    {
	for (postn = 1; postn <= n; postn++)
	{
		for (space = 1; space < postn; space++) // Change space <= postn to space < postn
		    _putchar(' ');
	    _putchar('\\'); // Change _putchar(92) to _putchar('\\')
	    _putchar('\n');
	}
    }
}
