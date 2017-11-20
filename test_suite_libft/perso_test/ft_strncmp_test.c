#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	size_t		n;
	
	if (argc == 1)
		argv[0] = NULL;

	n = 3;
	s2 = "abcd";
	s1 = "abc";
	printf("s1 %s and s2  %s and n = %zu\n", s1, s2, n);
	printf("ft_strncmp(str,int,n) = %d\n", ft_strncmp(s1,s2,n));
	printf("   strncmp(str,int,n) = %d\n\n",strncmp(s1,s2,n));

	n = 3;
	s2 = "ab";
	s1 = "abcd";
	printf("s1 %s and s2  %s and n = %zu\n", s1, s2, n);
	printf("ft_strncmp(str,int,n) = %d\n", ft_strncmp(s1,s2,n));
	printf("   strncmp(str,int,n) = %d\n\n",strncmp(s1,s2,n));

	n = 5;
	s2 = "a";
	s1 = "a";
	printf("s1 %s and s2  %s and n = %zu\n", s1, s2, n);
	printf("ft_strncmp(str,int,n) = %d\n", ft_strncmp(s1,s2,n));
	printf("   strncmp(str,int,n) = %d\n\n",strncmp(s1,s2,n));

	n = 0;
	s2 = "a";
	s1 = "b";
	printf("s1 %s and s2  %s and n = %zu\n", s1, s2, n);
	printf("ft_strncmp(str,int,n) = %d\n", ft_strncmp(s1,s2,n));
	printf("   strncmp(str,int,n) = %d\n\n",strncmp(s1,s2,n));

	n = 1;
	s2 = "\0";
	s1 = "\200";
	printf("s1 %s and s2  %s and n = %zu\n", s1, s2, n);
	printf("ft_strncmp(str,int,n) = %d\n", ft_strncmp(s1,s2,n));
	printf("   strncmp(str,int,n) = %d\n\n",strncmp(s1,s2,n));





	return (0);
}


