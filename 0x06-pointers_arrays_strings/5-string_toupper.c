/**
 * *string_toupper - Prints a string
 * @s: char
 *
 * Return: int
 */
char *string_toupper(char *s)
{
	char *x;
	int count;

	x = s;
	count = 0;
	while (s[count] != '\0')
	{
		if ((s[count] >= 97) && (s[count] <= 122))
		{
			x[count] = s[count] - ' ';
			count ++;
		}
		else
		{
			x[count] = s[count];
			count++;
		}
	}
	return (x);
	eaheha
}
