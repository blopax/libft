#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	const char	*str;

	if (1 < argc)
		argv[0] = "bou";

	str = "  -0123ab2";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "ab+123";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "--123";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "-00123";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "  -123";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\0 3";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\1  +2";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\2 2";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\3  +3";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\4 4";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\5  +5";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\6 6";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\7  +7";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\10 8";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\11  +9";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\12 10";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\13  +11";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));


	str = "\14 12";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\15  +13";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\16 14";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\17  +15";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\20 16";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\21  17";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\22 18";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\23  19";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\24 20";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\25  +21";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\26 22";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\27  +23";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));


	str = "\30 24";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\31  +25";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\32 26";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\33  +27";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\34 28";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\35  +29";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\36 30";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\37  +31";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\40 32";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\11  +2";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\12 3";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));

	str = "\127  +2";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));



	str = "  92233720368547758010";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));


	str = "  -18446744073709551920";
	printf("atoi    of %s is %d\n", str, atoi(str));
	printf("ft_atoi of %s is %d\n\n", str, ft_atoi(str));






return (0);
}
