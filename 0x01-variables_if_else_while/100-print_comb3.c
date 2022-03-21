#include <stdio.h>
/**
 * main - This program prints all possible
 * different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (i !=  j)
			{
				putchar(i);

				putchar(j);
<<<<<<< HEAD
				if (i != '8'		 || j != '9')
=======
						 
 ​                                if (i != '8' || j != '9')
>>>>>>> f7624d92641987fbf9fc67f8e2eabad30ee06d57
				{
putchar(',');
putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
