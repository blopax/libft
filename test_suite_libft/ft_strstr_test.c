#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	const char	*haystack;
	const char	*needle;
	
	if (argc == 1)
		argv[0] = NULL;

	needle = "0jk";
	haystack = "jk0jki0jk";
	printf("string %s and int  %s\n", haystack, needle);
	printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
	printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));

	needle = "";
	haystack = "jk0jki0jk";
	printf("string %s and int  %s\n", haystack, needle);
	printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
	printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));
	
	needle = "nowhere";
	haystack = "jk0jki0jk";
	printf("string %s and int  %s\n", haystack, needle);
	printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
	printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));

	needle = "0jki0jk";
	haystack = "jk0jki0jk";
	printf("string %s and int  %s\n", haystack, needle);
	printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
	printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));

		needle = "0jki0jk0";
		haystack = "jk0jki0jk";
		printf("string %s and int  %s\n", haystack, needle);
		printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
		printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));

		needle = "0";
		haystack = "0";
		printf("string %s and int  %s\n", haystack, needle);
		printf("ft_strstr(str,int) = %s\n", ft_strstr(haystack,needle));
		printf("   strstr(str,int) = %s\n\n",strstr(haystack,needle));

	return (0);
}


