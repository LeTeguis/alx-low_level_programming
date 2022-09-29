#include <stdio.h>

int isPalindrome(char *str, int t)
{
	int i = 0;
	int j = t - 1;

	if (t <= 0 || str == 0)
		return (0);
	while (i < j)
	{
		if (str[i] != str[j])
			return (-1);
		i++;
		j--;
	}
	return (1);
}

int main(void)
{
	int i = 999;
	int max = 0;
	int gmax = 0;
	int dmax = 0;

	while (i > 99)
	{
		int j = 999;

		while (j > 99)
		{
			int mul = i * j;
			char str[7];
			int k = 0;
			int len = 1;

			while (mul > 9)
			{
				mul /= 10;
				len++;
			}
			mul = i * j;
			for (k = 6; k >= 0; k--)
			{
				if (k >= len)
					str[k] = '\0';
				else
				{
					str[k] = '0' + (mul % 10);
					mul /= 10;
				}
			}
			mul = i * j;
			if (isPalindrome(str, len) == 1)
			{
				k = 999;
				while (mul % k != 0)
				{
					if (k < 100)
						break;
					k--;
				}
				if (k >= 100)
				{
					if (max < mul)
					{
						max = mul;
						gmax = k;
						dmax = max / gmax;
					}
					printf("%d * %d = %d\n", k, mul / k, mul);
				}
			}
			j--;
		}
		i--;
	}
	printf("max: %d * %d = %d \n", gmax, dmax, max);
	return (0);
}
