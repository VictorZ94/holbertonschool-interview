#include "holberton.h"

/**
 * main - Enter point program infiniry mul
 * @argc: count arguments
 * @argv: command line args
 *
 * Return: On sucess 0, otherwise 98
 */
int main(int argc, char *argv[])
{
	int i;
	char *string1 = argv[1];
	char *string2 = argv[2];
	int *big_number;

	if (argc != 3)
		Error_message();

	for (i = 0; i < _strlen(string1); i++)
		if (_isdigit(string1[i]) == 0)
			Error_message();

	for (i = 0; i < _strlen(string2); i++)
		if (_isdigit(string2[i]) == 0)
			Error_message();

	big_number = multiply(string1, string2);
	if (big_number == 0)
		_putchar('0');
	else
	{
			i = 0;
			while (i <= _strlen(string1) + _strlen(string2) && big_number[i] == 0)
				i++;

			for (int j = i; j < _strlen(string1) + _strlen(string2); j++)
				_putchar('0' + big_number[j]);
	}
	_putchar('\n');
	free(big_number);
	return (0);
}

/**
 * multiply - infinity multiplication
 * @num1: first num as string for multiply
 * @num2: second num as string for multiply
 *
 * Return: array of string
 */
int *multiply(char *num1, char *num2)
{
	int *result;
	int i, j;
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i_n1, i_n2, sum;
	int carry, n1, n2;

	result = vector(len1 + len2);
	for (i = (len1 - 1); i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		i_n2 = 0;
		for (j = (len2 - 1); j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}

	i = len1 + len2 - 1;
	while (i >= 0 && result[i] == 0)
		i--;

	if (i == -1)
	{
		return (0);
	}
	reverse_array(result, len1 + len2);
	return (result);
}

/**
 * vector - dynamic memory for save result
 * @len: lenght of array
 *
 * Return: array of int's.
 */
int *vector(int len)
{
	int *vector;
	int i;

	vector = malloc(sizeof(int) * len + 1);
	if (!vector)
		return (NULL);
	for (i = 0; i < len; i++)
		vector[i] = 0;

	return (vector);
}

/**
 * reverse_array - reverse an array
 * @a: Argument pointer to int
 * @n: Argument pointer t
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int j, z;

	n--;
	j = 0;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	}
}

/**
 * Error_message - print error message and exit 98
 *
 * Return: None
 */
void Error_message(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * _strlen - my own function calculate the length of a string.
 * @s: Argument - pointer to a type char.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _isdigit - print verify if a character is digit
 * @c: Argument type char
 *
 * Return: On success 1 otherwise 0
 */
int _isdigit(char c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
