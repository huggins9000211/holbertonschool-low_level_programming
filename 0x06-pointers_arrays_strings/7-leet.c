/**
 * *leet - Prints a string
 * @s: char
 *
 * Return: int
 */
char *leet(char *s)
{
	int count;
	int c;

	char *l = "aAeEoOtTlL";

	char *n = "4433007711";

	c = 0;
	count = 0;
	while (s[count] != '\0')
	{

		while (l[c] != '\0')
		{
			if (s[count] == l[c])
			{
				s[count] = n[c];
			}
			c++;
		}
		c = 0;
		count++;
	}
	return (s);
}
