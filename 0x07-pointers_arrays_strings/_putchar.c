#include <unistd.h>
/**
 * _putchar - writes charactr to c stdout
 * @c: character checker
 * Return: 1 on success
 * on error, -1 is returned, and error is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
