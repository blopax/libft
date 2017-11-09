#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		printf("Length of %s is %d\n", argv[i], ft_strlen(argv[i]));
		i++;
	}
	return (0);
}
