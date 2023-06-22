#include <stdio.h>
/**
 * main - printing sizes of datatypes
 *
 * Return: always (0)
 */
int main(void)
{
	char mychar;
	int myint;
	long int mylint;
	long long int myllint;
	float myfloat;

	printf("Size of char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of int: %lu byte(s)\n", sizeof(myint));
	printf("Size of long int: %lu byte(s)\n", sizeof(mylint));
	printf("Size of long long int: %lu byte(s)\n", sizeof(myllint));
	printf("Size of float: %lu byte(s)\n", sizeof(myfloat));
	return (0);
}
