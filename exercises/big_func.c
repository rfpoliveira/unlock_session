#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	int i;
	int j;
	int x;
	char *s;

	s = "hello";
	i = 0;
	x = 0;
	j = -1;
	while (argv[++i])
	{
		while (argv[i][++j])
		{
			if (argv[i][j] == s[0])
				{
					x = j;
					while (s[x - j])
					{
						if (argv[i][x] == s[x - j])
							x++;
						else
							{
								x = 0;
								break ;
							}
						if (x - j == strlen(s))
							return (printf("String Found! :)\n"));
					}
				}

		}
		j = -1;
	}
	return (printf("String not found! :(\n"));
}