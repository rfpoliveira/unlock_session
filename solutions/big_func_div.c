#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int common_char_found(char *arg, char *s, int j)
{
	size_t x;

	x = j;
	while (s[x - j])
	{
		if (arg[x] == s[x - j])
			x++;
		else
			{
				x = 0;
				break ;
			}
		if (x - j == strlen(s))
		{
			printf("String found :)\n");
			exit(0);
		}
	}
	return (0);
}

int	analize_argument(char *arg, char *s)
{
	int j;

	j = -1;
	while (arg[++j])
	{
		if (arg[j] == s[0])
			common_char_found(arg, s, j);
	}
	return (0);
}

int main (int argc, char **argv)
{
	int		i;
	char	*s;

	//Check if "hello" is in **argv
	s = "hello";
	i = 0;
	
	if (argc < 2)
		return (printf("Usage: ./a.out <string> <string> ...\n"));

	while (argv[++i])
		analize_argument(argv[i], s);
	return (printf("String not found! :(\n"));
}