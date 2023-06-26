#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - getting last digit of int
 *
 * Return: And always return (0)
*/

int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lst = n % 10;
	if (lst > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("The last digit of %d is %d and is equal to zero\n", n, lst);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	}
	return (0);
}
