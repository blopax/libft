#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (1 < argc)
		argv[0] = "bou";

	printf("strdup    = %s\n", strdup(""));
	printf("ft_strdup = %s\n\n", ft_strdup(""));

	
	printf("strdup    = %s\n", strdup("banana"));
	printf("ft_strdup = %s\n\n", ft_strdup("banana"));


	printf("strdup    = %s\n", strdup("tomatomatomatomaota"));
	printf("ft_strdup = %s\n\n", ft_strdup("tomatomatomatomaota"));


return (0);
}
