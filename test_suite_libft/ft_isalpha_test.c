#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	int	c;

	if (1 < argc)
		argv[0] = "bou";

	c = 100;
	printf("isalpha    of %d is %d\n", c, isalpha(c));
	printf("ft_isalpha of %d is %d\n\n", c, ft_isalpha(c));



return (0);
}
