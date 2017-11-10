#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char		*s1;
	const char	*s2;
	int			i;


	if (argc == 1)
		argv[0] = NULL;

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
	printf("s1 %s and s2 %s\n", s1, s2);
	printf("strcat(dst,src)    = %s\n", strcat(s1, s2));
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
	printf("ft_strcat(dst,src) = %s\n\n", ft_strcat(s1, s2));
	free(s1);


	s2 = "0123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*0)))
		return (1);
	i = 0;
	while (i < 0)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2 %s\n", s1, s2);
	printf("strcat(dst,src)    = %s\n", strcat(s1, s2));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*0)))
		return (1);
	i = 0;
	while (i < 0)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("strcat(dst,src)    = %s\n\n", ft_strcat(s1, s2));
	free(s1);



	s2 = "0123456789012345678900123456789";
	if (!(s1 = (char *)malloc(sizeof(char)*40)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("s1 %s and s2 %s\n", s1, s2);
	printf("strcat(dst,src)    = %s\n", strcat(s1, s2));
	i = 0;
	free(s1);
	
	if (!(s1 = (char *)malloc(sizeof(char)*40)))
		return (1);
	i = 0;
	while (i < 26)
	{
		s1[i] = 'a' + i;
		i++;
	}
	s1[i] = '\0';
	printf("ft_strcat(dst,src) = %s\n\n", ft_strcat(s1, s2));
	free(s1);


	return (0);

}


