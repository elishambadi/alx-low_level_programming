#include <stdio.h>

/**
 *main - main function
 *
 *Return: 0 to terminate program
 */

int main(void)
{
	int d1 = '0';
	int d2 = '0';
	
	int d3 = '0';
	int d4 = '0';
	

	while (d1 <= '9')
	{
		while (d2 <= '9')
		{
			while (d3 <='9')
			{
				if (d2 != '0')
				{
					d4 = d2 + 1;
				}
				else 
				{
					d4 = '0';
				}
				while (d4 <= '9')
				{
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					putchar(',');
					putchar(' ');
					d4++;
				}
				d3++;
			}
			d2++;
			d3 = '0';
			d4 = '0';
		}
		d1++;
	}
	putchar('\n');

	return (0);


}
