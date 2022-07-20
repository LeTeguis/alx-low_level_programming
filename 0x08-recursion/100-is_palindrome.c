#include "main.h"

/**
 * palindrome - real palendrome
 *
 * @left: left walk
 * @s: string
 * @right: right walk
 *
 * Description: determine if caracte beetween left and right of
 * string is it palindrome
 *
 * Return: 1 if is palendrome 0 if not
 */

int palindrome(int left, char *s, int right)
{
	if (s == 0 || left >= right)
		return (1);
	if (s[left] == ' ')
		return (palindrome(++left, s, right));
	if (s[right] == ' ')
		return (palindrome(left, s, --right));
	if (s[left] != s[right])
		return (0);
	return (palindrome(left + 1, s, right - 1));
}

/**
 * is_palindrome - palindrome
 *
 * @s: string
 *
 * Description: define if a string is a palindrome
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int leng = 0;

	if (s == 0)
		return (0);
	if (s[0] == '\0')
		return (1);

	while (s[leng++]);
	leng--;

	return (palindrome(0, s, leng - 1));
}
