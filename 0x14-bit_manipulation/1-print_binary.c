#include "holberton.h"

void print_binary(unsigned long int n)
{

	int i;

	int started = 0;
	if (n == 0)
	{
		_putchar('0');
	}
	for (i = 31; i >= 0; i--) {
		int k = n >> i;
		if (k & 1)
		{
			started = 1;
			_putchar('1');
		}
		else
		{
			if (started)
			{
				_putchar('0');
			}
		}

	}
}

char *toBase2(int x)
{
	int temp;
        int copy = x;
        int len;
        int count;
        char *result;
        int i;
        char c;

        count = 1;
        len = 0;
        while (copy != 0)

        {
                /* printf("%d", len); TO TEST */
                if (copy != 0)
                        len++;
                copy = copy / 2;
        }

        /* printf("*%d*", len); TO TEST */
        result = malloc(len + 1);
        while (x != 0)

	{
                temp = x;
                x = x / 2;


                i = temp % 2;
                c = i + '0';
                result[len - count] = c;
                count++;

        }


	 /* printf("*%s*", result); TO TEST*/
        result[len + 1] = '\0';
        return (result);
}
