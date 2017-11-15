/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:26:21 by pclement          #+#    #+#             */
/*   Updated: 2017/11/15 15:29:39 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*fresh_str;

	len = ft_strlen(s);
	if (!(fresh_str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		fresh_str[i] = (*f)(i, s[i]);
		i++;
	}
	fresh_str[i] = 0;
	return (fresh_str);
}
