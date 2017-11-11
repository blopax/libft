#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	
	if (argc == 1)
		argv[0] = NULL;

	s2 = "a";
	s1 = "0";
	printf("string %s and int  %s\n", s1, s2);
	printf("ft_strcmp(str,int) = %d\n", ft_strcmp(s1,s2));
	printf("   strcmp(str,int) = %d\n\n",strcmp(s1,s2));

	s2 = "";
	s1 = "q";
	printf("string %s and int  %s\n", s1, s2);
	printf("ft_strcmp(str,int) = %d\n", ft_strcmp(s1,s2));
	printf("   strcmp(str,int) = %d\n\n",strcmp(s1,s2));
	
	s2 = "abcd";
	s1 = "abc";
	printf("string %s and int  %s\n", s1, s2);
	printf("ft_strcmp(str,int) = %d\n", ft_strcmp(s1,s2));
	printf("   strcmp(str,int) = %d\n\n",strcmp(s1,s2));

	s2 = "\200";
	s1 = "\0";
	printf("string %s and int  %s\n", s1, s2);
	printf("ft_strcmp(str,int) = %d\n", ft_strcmp(s1,s2));
	printf("   strcmp(str,int) = %d\n\n",strcmp(s1,s2));

	return (0);
}


