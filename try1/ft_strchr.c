#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_ascii;

	i = 0;
	if (c < 0)
		c_ascii = 256 + c % 256;
	else
		c_ascii = c % 256;
	while (s[i] != c_ascii  && s[i] != '\0')
		i++;
	if (s[i] == c_ascii)
		return ((char *)(s + i));
	return (NULL);
}
