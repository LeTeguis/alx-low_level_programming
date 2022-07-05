#include "main.h"

/**
 * int _abs:
 * @n : the integer value
 * Description: define de the absolute number
 * Return: @n if @n < 0 or -@n if is not

 */

int _abs(int n)
{
        if (n < 0)
        {
                return (-n);
        }
        return (n);
}
