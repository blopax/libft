#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char		*s1;
	const char	*s2;
	size_t		n;
	int			i;


	if (argc == 1)
		argv[0] = NULL;

	n = 4;
	s2 = "0123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);


	n = 0;
	s2 = "0123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);


	n = 11;
	s2 = "0123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);


	n = 20;
	s2 = "0123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);


	n = 10;
	s2 = "0123456789012345678901234567890123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);


	n = 30;
	s2 = "0123456789012345678901234567890123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n", strncat(s1, s2, n));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2  %s and n %zu\n", s1, s2, n);
	printf("strncat(dst,src,dstsize) = %s\n\n", ft_strncat(s1, s2, n));
	free(s1);

	return (0);

}


