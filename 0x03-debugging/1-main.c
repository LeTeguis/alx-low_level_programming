/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
	
	/* i is not increment */
        while (i < 10)
        {
		/* i is not increment */
                putchar(i);
		/* i is not increment */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
