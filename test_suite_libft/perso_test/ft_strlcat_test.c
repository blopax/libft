#include "../libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char		*dst;
	const char	*src;
	size_t		dstsize;
	int			i;


	if (argc == 1)
		argv[0] = NULL;
	
	dstsize = 30;
	if (!(dst = (char *)malloc(sizeof(char)*dstsize)))
		return (1);
	src = "0123456789";
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("strlcat(dst,src,dstsize) = %zu\n", strlcat(dst,src,dstsize));
	printf("dst after strlcat %s\n", dst);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("ft_strlcat(dst,src,dstsize) = %zu\n", ft_strlcat(dst,src,dstsize));
	printf("dst after ft_strlcat %s\n\n", dst);
	free(dst);

	dstsize = 40;
	if (!(dst = (char *)malloc(sizeof(char)*dstsize)))
		return (1);
	src = "0123456789";
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("strlcat(dst,src,dstsize) = %zu\n", strlcat(dst,src,dstsize));
	printf("dst after strlcat %s\n", dst);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("ft_strlcat(dst,src,dstsize) = %zu\n", ft_strlcat(dst,src,dstsize));
	printf("dst after ft_strlcat %s\n\n", dst);
	free(dst);

	dstsize = 36;
	if (!(dst = (char *)malloc(sizeof(char)*dstsize)))
		return (1);
	src = "0123456789";
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("strlcat(dst,src,dstsize) = %zu\n", strlcat(dst,src,dstsize));
	printf("dst after strlcat %s\n", dst);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("ft_strlcat(dst,src,dstsize) = %zu\n", ft_strlcat(dst,src,dstsize));
	printf("dst after ft_strlcat %s\n\n", dst);
	free(dst);

	dstsize = 23;
	if (!(dst = (char *)malloc(sizeof(char)*dstsize)))
		return (1);
	src = "0123456789";
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("strlcat(dst,src,dstsize) = %zu\n", strlcat(dst,src,dstsize));
	printf("dst after strlcat %s\n", dst);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("ft_strlcat(dst,src,dstsize) = %zu\n", ft_strlcat(dst,src,dstsize));
	printf("dst after ft_strlcat %s\n\n", dst);
	free(dst);

	dstsize = 0;
	if (!(dst = (char *)malloc(sizeof(char)*dstsize)))
		return (1);
	src = "0123456789";
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("strlcat(dst,src,dstsize) = %zu\n", strlcat(dst,src,dstsize));
	printf("dst after strlcat %s\n", dst);
	i = 0;
	while (i < 26)
	{
		dst[i] = 'a' + i;
		i++;
	}
	dst[i] = '\0';
	printf("dst %s and src  %s and dstsize %zu\n", dst, src, dstsize);
	printf("ft_strlcat(dst,src,dstsize) = %zu\n", ft_strlcat(dst,src,dstsize));
	printf("dst after ft_strlcat %s\n\n", dst);
	free(dst);


	return (0);
}


