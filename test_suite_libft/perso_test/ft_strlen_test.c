#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (1 < argc)
		argv[0] = "bou";

	printf("strlen    of %s is %zu\n", "", ft_strlen(""));
	printf("ft_strlen of %s is %zu\n\n", "", ft_strlen(""));

	printf("strlen    of %s is %zu\n", "", ft_strlen("0123"));
	printf("ft_strlen of %s is %zu\n\n", "", ft_strlen("0123"));

	printf("strlen    of %s is %zu\n", "", ft_strlen("vfsqdmjfimqsjfimqsdjfimzj"));
	printf("ft_strlen of %s is %zu\n\n", "", ft_strlen("vfsqdmjfimqsjfimqsdjfimzj"));

return (0);
}
