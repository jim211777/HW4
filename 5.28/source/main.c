#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
char asc(char ch);

int main()
{
	char x;
	x = ' ';
	printf("%s\n", asc(x));
}
	char asc(char ch)
	{
		while ((ch = getchar()) != EOF)
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch + 32;

			}
			else if (ch >= 'a' && ch <= 'z')
			{
				ch = ch - 32;
			}
			putchar(ch);
	}
		
		return ch;
	}
