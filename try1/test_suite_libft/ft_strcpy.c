#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*src;
	char	*dst;
	int		i;

	if (argc == 1)
		argv[0] = NULL;


	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';

	src = "0123456789";
	printf("FT_STRCPY\n");
	printf("Src avant = %s et dst avant = %s \n", src, dst);
	printf("STRCPY    = %s\n", strcpy(dst, src));
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
	printf("FT_STRCPY = %s", ft_strcpy(dst, src));
	free(dst);
	printf("\n\n");


	if (!(dst = (char *)malloc(sizeof(char)*30)))
		return (1);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';

	src = "012345678901234567890123456789";
	printf("FT_STRCPY\n");
	printf("Src avant = %s et dst avant = %s \n", src, dst);
	printf("STRCPY    = %s\n", strcpy(dst, src));
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
	printf("FT_STRCPY = %s", ft_strcpy(dst, src));
	free(dst);
	printf("\n\n");



	return (0);
}
