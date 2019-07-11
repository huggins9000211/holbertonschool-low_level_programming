#include "holberton.h"

/**
 * wildcmp - check the code for Holberton School students.
 *@s1: char
 *@s2: char
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	char *s3;
	char *s4;
	char s5;
	char s6;

	s3 = s1;
	s4 = s2;
	s5 = *(s3 + 1);
	s6 = *(s4 + 1);

	if (*s4 == '*')
	{
		if (s5 == '\0')
		{
			return (1);
		}
		else if (s5 == s6)
		{
			s3++;
			s4++;
			return (wildcmp(s3, s4));
		}
		else
		{
			s3++;
			return (wildcmp(s3, s4));
		}
	}
	else
	{
		if (*s3 == *s4)
		{
			if ((s6 == '\0') && (s5 == '\0'))
			{
				return (1);
			}
			else
			{
				s3++;
				s4++;
				return (wildcmp(s3, s4));
			}
		}
		else
		{
			return (0);
		}
	}
}
