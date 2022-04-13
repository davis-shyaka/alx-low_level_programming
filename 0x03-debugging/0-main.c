#include <stdlib.h>
#include <time.h>
#include <main.h>

/*
 * main - prints a random number
 *
 * Description: prints and test whether it's postive, negative or 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(0);
	return (0);
}
