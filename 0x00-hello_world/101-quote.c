#include <unistd.h>

/**
 * main - prints and that piece of art is useful
 * - Due Korpar, 2015-10-19
 * Return: Always 0 (failure)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
