#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	size_t	len;
	char	*src;
	char	*dst;
	int		i;

	if (argc == 1)
		argv[0] = NULL;


	src = "0123456789";
	len = 2;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");

	src = "0123456789";
	len = 12;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");

	src = "0123456789";
	len = 30;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");

	src = "0123456789";
	len = 0;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");


	src = "012345678901234567890123456789";
	len = 26;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");

	src = "012345678901234567890123456789";
	len = 30;
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("Src avant = %s, dst avant = %s et len = %zu \n", src, dst, len);
	printf("STRNCPY    = %s\n", strncpy(dst, src, len));
	free(dst);
	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("FT_STRNCPY = %s", ft_strncpy(dst, src, len));
	free(dst);
	printf("\n\n");



	return (0);
}
