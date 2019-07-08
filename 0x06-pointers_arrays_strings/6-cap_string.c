/**
 * *cap_string - Prints a string
 * @s: char
 *
 * Return: int
 */
char *cap_string(char *s)
{
	int count;
	char d[13] = " \n\t,;.!?\"(){}";
	int dc;

	dc = 0;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] >= 97 && s[count] <= 122)
		{
			if (count == 0)
			{
				s[count] = s[count] - ' ';
			}
			else
			{
				while (d[dc] != '\0')
				{
					if (s[count - 1] == d[dc])
					{
						s[count] = s[count] - ' ';
					}
					dc++;
				}
				dc = 0;
			}
		}
		count++;
	}
	return (s);
}
