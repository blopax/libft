#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	int	c;

	if (1 < argc)
		argv[0] = "bou";

	c = 0;
	while (c < 128)
	{
	printf("isprint    of %d is %d\n", c, isprint(c));
	printf("ft_isprint of %d is %d\n\n", c, ft_isprint(c));
	c++;
	}

return (0);
}
