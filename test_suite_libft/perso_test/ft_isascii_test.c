#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	int	c;

	if (1 < argc)
		argv[0] = "bou";

	c = - 1;
	printf("isascii    of %d is %d\n", c, isascii(c));
	printf("ft_isascii of %d is %d\n\n", c, ft_isascii(c));



return (0);
}
