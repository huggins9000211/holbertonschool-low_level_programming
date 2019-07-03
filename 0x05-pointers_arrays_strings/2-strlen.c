/**
 * _strlen - Prints a string
 * @s: char
 * @i: char
 * @count: int
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[0] != '\0')
	{
		s++;
		count++;
	}
	return (count);

}
