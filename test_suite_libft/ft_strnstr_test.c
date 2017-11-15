#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	const char	*haystack;
	const char	*needle;
	size_t		len;
	
	if (argc == 1)
		argv[0] = NULL;

	needle = "0jk";
	haystack = "jk0jki0jk";
	len = 4;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));

	needle = "";
	haystack = "jk0jki0jk";
	len = 4;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));
	
	needle = "nowhere";
	haystack = "jk0jki0jk";
	len = 4;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));

	needle = "0jki0jk";
	haystack = "jk0jki0jk";
	len = 9;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));

	needle = "0jki0jk0";
	haystack = "jk0jki0jk";
	len = 15;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));

	needle = "0";
	haystack = "0";
	len = 15;
	printf("string %s and int %s and len %zu\n", haystack, needle, len);
	printf("ft_strnstr(str,int) = %s\n", ft_strnstr(haystack,needle,len));
	printf("   strnstr(str,int) = %s\n\n",strnstr(haystack,needle,len));

	return (0);
}


