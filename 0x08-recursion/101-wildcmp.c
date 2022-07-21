#include "main.h"

int null_step(char *s1, char *s2, int concern);

/**
 * next_step - go to the nex *
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: go to the next data
 *
 * Return: the wildcmp compare value
 */

int next_step(char *s1, char *s2)
{
	if (!s1[0])
		return (null_step(s1, s2, 1));
	if (!s2[0])
		return (null_step(s1, s2, 2));
	if (s1[0] == s2[0])
		return (next_step((s1 + 1), (s2 + 1)));
	if (s1[0] == '*')
	{
		if (s1[1] && s1[1] == '*')
			return (next_step((s1 + 1), s2));
		else if (s1[1])
		{
			if (s1[1] == s2[0] && next_step((s1 + 1), s2) == 1)
				return (1);
			return (next_step(s1, (s2 + 1)));
		}
		return (1);
	}
	if (s2[0] == '*')
	{
		if (s2[1] && s2[1] == '*')
			return (next_step(s1, (s2 + 1)));
		else if (s2[1])
		{
			if (s2[1] == s1[0] && next_step(s1, (s2 + 1)) == 1)
				return (1);
			return (next_step((s1 + 1), s2));
		}
		return (1);
	}
	return (0);
}

/**
 * null_step - null step
 *
 * @s1: first string
 * @s2: second string
 * @concern: what is concerne s1 or s2?
 *
 * Description: define equal exist when one string is null
 *
 * Return: 1 if two string is equal 0 if not
 */

int null_step(char *s1, char *s2, int concern)
{
	if ((concern == 1 && !s2[0]) || (concern == 2 && !s1[0]))
		return (1);
	if (concern == 1 && s2[0] == '*')
		return (null_step(s1, (s2 + 1), concern));
	if (concern == 2 && s1[0] == '*')
		return (null_step((s1 + 1), s2, concern));
	return (0);
}

/**
 * wildcmp - compare
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: compares two strings, The special char *
 * can replace any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!s1[0] && !s2[0])
		return (1);
	if (!s1[0])
		return (null_step(s1, s2, 1));
	if (!s2[0])
		return (null_step(s1, s2, 2));
	return (next_step(s1, s2));
}
