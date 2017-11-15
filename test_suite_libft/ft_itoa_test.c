#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	int		n;

	if (1 < argc)
		argv[0] = "bou";

	n = -123;
	printf("ft_itoa of %d is %s\n\n", n, ft_itoa(n));

	n = 123;
	printf("ft_itoa of %d is %s\n\n", n, ft_itoa(n));

	n = INT_MIN;
	printf("ft_itoa of %d is %s\n\n", n, ft_itoa(n));

	n = INT_MAX;
	printf("ft_itoa of %d is %s\n\n", n, ft_itoa(n));

	n = 0;
	printf("ft_itoa of %d is %s\n\n", n, ft_itoa(n));


return (0);
}
