#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int		main(int argc, char **argv)
{
	const char	*s;
	int			c;
	
	if (argc == 1)
		argv[0] = NULL;
	c = 48;
	s = "jk0jki0jk";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = 48 + 2 * 256;
	s = "jk0jki0jk";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));
	
	c = 48 - 3 * 256;
	s = "jk0jki0jk";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = 49;
	s = "jk0jki0jk";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = 48;
	s = "";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = 97 + 256;
	s = "a";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = 0;
	s = "bouh";
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));

	c = INT_MIN;
	s = "hello1 \0 hello2";
	printf("char INT_MIN %c soit %d", c % 256, c % 256);
	printf("string %s and int  %d\n", s, c);
	printf("ft_strchr(str,int) = %s\n", ft_strchr(s,c));
	printf("   strchr(str,int) = %s\n\n",strchr(s,c));


	return (0);
}


