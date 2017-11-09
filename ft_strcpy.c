#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s2);
	i = 0;
	while (s2[i] != '\0' && len + i < dstsize)
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
