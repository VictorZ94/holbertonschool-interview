#include "palindrome.h"

/**
 * is_palindrome - Entry point
 *
 * @n: number to check whether is palindrome
 *
 * Return: 1 on success Otherwise 0
 */
int is_palindrome(unsigned long n)
{
	unsigned long copy_number = n;
	unsigned long reversed_num;

	reversed_num = reverse_num(copy_number);
	if (reversed_num == n)
		return (1);

	return (0);
}

/**
 * reverse_num - function reversed a number
 *
 * @num: number to be reversed
 *
 * Return: number reversed
 */
unsigned long reverse_num(unsigned long num)
{
	unsigned long reversed;

	reversed = 0;
	while (num > 0)
	{
		reversed = reversed * 10 + (num % 10);
		num = num / 10;
	}
	return (reversed);
}
