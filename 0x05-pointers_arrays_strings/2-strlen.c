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
	/*char i;*/
	int count;
	/*for(i=s; i != '\0'; i++)
	    	count ++;
	*/
	count = 0;
	while (s[0] != '\0')
	{
		s ++;
		count ++;
	}
	return count;

}
